# Use the official Ubuntu 20.04 ARM base image -> base 이미지로 사옹할 이미지
FROM arm64v8/ubuntu:22.04

# Set environment variables -> 비대화형 모드로 설정하여 설치 중에 불필요한 프롬프트를 방지함
ENV DEBIAN_FRONTEND=noninteractive

# Copy the packages.txt file into the container -> 호스트의 packages.txt를 /tmp로 복사
COPY packages /tmp/packages

# Update package list and install packages from packages.txt -> 패키지 목록을 업데이트하고 packages.txt에 나열된 패키지를 설치함
RUN apt-get update && \
    xargs -a /tmp/packages apt-get install -y && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/* /tmp/packages.txt

# Set the working directory -> /workspace 디렉토리를 작업 디렉토리로 설정 ( 소스코드를 복사하거나 빌드할 때 사용 될 수 있음)
WORKDIR /workspace

# Define default command -> 컨테이너가 실행될 때 기본적으로 bash 셀을 시작하도록 설정
CMD ["/bin/bash"]