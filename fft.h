#ifndef __FFT_H__
#define __FFT_H__

#ifdef __cplusplus
extern "C" {
#endif

// 内部常量定义
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

//蝶形结构初始化，返回内存地址
void *fft_init(int len);

//回收内存
void  fft_free(void *c);

/**
 * @brief FFT函数
 * 
 * @param c 蝶形单元缓存区，包含输入数据长度信息
 * @param in 输入
 * @param out 输出
 */
void  fft_execute(void *c, float *in, float *out);

#ifdef __cplusplus
}
#endif

#endif
