FROM ubuntu:22.04

# AtCoder 用の環境構築
# atcoder-cli, online-judge-tools, C++のコンパイラ, python3, ruby を導入する
RUN apt-get update && apt-get install -y \
    gcc \
    g++ \
    python3 \
    python3-pip \
    nodejs \
    npm \
    ruby-full \
    && pip3 install online-judge-tools \
    && npm install -g atcoder-cli \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

RUN acc config default-task-choice all \
    && acc config default-test-dirname-format test \
    && acc config default-template cpp 

COPY ./template/cpp/* /root/.config/atcoder-cli-nodejs/cpp/

# bashrc へのエイリアスの追加
RUN echo "alias ojt='g++ main.cpp && oj t'" >> /root/.bashrc && \
    echo "alias pojt='oj t -c \"python3 main.py\"'" >> /root/.bashrc && \
    echo "alias accl='acc login'" >> /root/.bashrc && \
    echo "alias ojl='oj login https://beta.atcoder.jp/'" >> /root/.bashrc
