FLAGS = -Wall -Wextra

test:
	docker compose exec streebog bash -c "g++ $(FLAGS) -g -pthread ./src/gost341112.cpp ./tests/tests.cpp /usr/lib/libgtest.a -o bin/test && bin/test"

style:
	docker compose exec streebog bash -c "clang-format -i src/*.cpp src/*.h tests/*.cpp"


clean:
	docker compose exec streebog rm -rf bin/*


workflow_build_test:
	g++ $(FLAGS) -g -pthread ./src/gost341112.cpp ./tests/tests.cpp /usr/lib/libgtest.a -o bin/test
	

