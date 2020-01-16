#ifndef CONFUSE_SHADER
const char* FxShaderColorFilter_frag = STRINGIFY(

\n#ifdef GL_ES\n
precision mediump float;\n
\n#endif\n

varying vec2 v_texCoord;
varying vec4 v_fragmentColor;

uniform sampler2D u_texture;
uniform mat4 u_colorMat;

void main()
{
	gl_FragColor = u_colorMat * (v_fragmentColor * texture2D(u_texture, v_texCoord));
}
);

#else

static const unsigned char FxShaderColorFilter_frag_static[279]={
0x73,0x68,0x61,0x64,0x65,0x72,0xc6,0x31,0x93,0x1c,0x9,0x1,0x0,0x0,
0x79,0x62,0x42,0xd,0x3,0x16,0x16,0xe,0x41,0x23,0x29,0x2d,0x36,0x3b,0x6b,0x6e,
0x15,0x0,0x16,0xb,0x8,0x17,0xc,0x1d,0x1d,0x48,0xc,0x1,0x1,0x1b,0x6,0x5,
0x11,0x44,0x3,0x1e,0x1c,0x9,0x15,0x5f,0x6f,0x78,0x79,0x4b,0x4,0xa,0x1,0x1b,
0x15,0x62,0x6b,0x6e,0x13,0x13,0x1,0x11,0x8,0xa,0x2,0x52,0x5,0xd,0x2,0x56,
0x45,0x4,0x2c,0x1c,0x4,0x1c,0x26,0x1d,0x1c,0x1a,0x5,0x5f,0x6f,0x4,0x12,0x1a,
0x18,0xd,0xb,0x15,0x53,0x1e,0x4,0x7,0x51,0x52,0x5,0x37,0x7,0x16,0x4,0x15,
0x1e,0xd,0xf,0x10,0x26,0x1d,0x1f,0x7,0x13,0x5f,0x6f,0x78,0x6,0x6,0x8,0x2,
0xa,0x0,0x1e,0x48,0x12,0x5,0x8,0x2,0x1f,0xd,0x13,0x56,0x21,0x52,0x6,0x37,
0x15,0x1,0x1d,0x6,0x6,0x1a,0x4,0x5f,0x6f,0x7,0x1d,0x1,0x7,0xb,0x17,0x1f,
0x53,0x5,0x0,0x10,0x51,0x52,0x6,0x37,0x2,0xb,0x9,0x1d,0x1,0x25,0x0,0x10,
0x5e,0x78,0x79,0x1e,0xe,0xd,0x1,0x52,0x1e,0x9,0x8,0xa,0x4d,0x5b,0x79,0x13,
0x6b,0x44,0x45,0x52,0x53,0xf,0xd,0x3b,0x23,0x0,0x12,0xf,0x22,0xb,0x9,0x1d,
0x1,0x48,0x5c,0x44,0x10,0x2d,0x10,0x7,0xd,0xb,0x17,0x3f,0x12,0x1c,0x41,0x4e,
0x45,0x5a,0x5,0x37,0x7,0x16,0x4,0x15,0x1e,0xd,0xf,0x10,0x26,0x1d,0x1f,0x7,
0x13,0x44,0x4f,0x52,0x7,0xd,0x19,0x10,0x10,0x0,0x16,0x5a,0x25,0x4c,0x10,0x2d,
0x7,0xd,0x19,0x10,0x10,0x0,0x16,0x44,0x41,0x12,0x3a,0x6,0x16,0x10,0x22,0xb,
0xa,0x0,0x17,0x41,0x48,0x5f,0x6f,0xf,0x79
};
const char* FxShaderColorFilter_frag = (const char*) FxShaderColorFilter_frag_static;

#endif/*CONFUSE_SHADER*/