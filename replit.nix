{ pkgs } : {
    deps = with pkgs; [
        gcc
        cmake
        ccls
    ];
}
