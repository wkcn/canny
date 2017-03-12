TARGET := test

CXX := g++
CFLAGS := -g -std=c++11
LDFLAGS :=  -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_imgcodecs -pthread -lX11

SRCS := $(wildcard ./*.cpp)
OBJS := $(patsubst %cpp,%o,$(SRCS))

all: $(OBJS) 
	$(CXX) $^ $(CFLAGS) $(LDFLAGS) -o $(TARGET)
clean:
	rm $(TARGET) $(OBJS)
%.o:%.cpp  
	$(CXX) $< $(CFLAGS) $(LDFLAGS) -c -o $@ 
