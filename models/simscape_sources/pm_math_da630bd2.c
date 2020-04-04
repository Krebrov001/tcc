#include "pm_std.h"
void pm_math_lin_alg_qrFactor(uint32_T pm_math_gN74BbsU5wqNjkJbC9b672,uint32_T
n,real_T*pm_math__lerGssn0Ru_r3kSOzEmI_,real_T*pm_math_VTF2UfH8BZtl6UY_DYsxe1,
int32_T*pm_math_faz4xAO7ZxLl721PFFQIb0,real_T*pm_math_9vzhxzKknmyaJetRZA1K51);
uint32_T pm_math_lin_alg_getRankWithTol(const real_T*
pm_math_2kRUucGwF8yJYVACAVBqN2,uint32_T pm_math_gN74BbsU5wqNjkJbC9b672,
uint32_T n,real_T pm_math_IkYq7838pFkQD4JuAdSut_);boolean_T
pm_math_lin_alg_qrSolveTall(uint32_T pm_math_gN74BbsU5wqNjkJbC9b672,uint32_T n
,const real_T*pm_math_2kRUucGwF8yJYVACAVBqN2,const real_T*
pm_math_VTF2UfH8BZtl6UY_DYsxe1,int32_T*pm_math_faz4xAO7ZxLl721PFFQIb0,real_T
pm_math_dP1Ztx7BuYQ1rmxh9DNmV1,real_T*pm_math_Xv9d_slQCAr3irmgYeei12);int32_T
pm_math_lin_alg_qrSolveWide(const uint32_T pm_math_gN74BbsU5wqNjkJbC9b672,
const uint32_T n,const real_T*pm_math_2kRUucGwF8yJYVACAVBqN2,const real_T*
pm_math_VTF2UfH8BZtl6UY_DYsxe1,const int32_T*pm_math_faz4xAO7ZxLl721PFFQIb0,
const real_T*b,real_T pm_math_dP1Ztx7BuYQ1rmxh9DNmV1,real_T*x);
#include "pm_std.h"
#include "pm_std.h"
#include "string.h"
#include "math.h"
static real_T*pm_math_qofsco9r_CpJyn8AsFtev_(const real_T*
pm_math_eLyHXQGDDy_j3RVSWedJb_){union{const real_T*
pm_math_eLyHXQGDDy_j3RVSWedJb_;real_T*pm_math_5lC3IszGdR4rbV7F9bwVU_;}
pm_math_MJ6HaMWdyRxHm3p_EZiD41;pm_math_MJ6HaMWdyRxHm3p_EZiD41 .
pm_math_eLyHXQGDDy_j3RVSWedJb_=pm_math_eLyHXQGDDy_j3RVSWedJb_;return
pm_math_MJ6HaMWdyRxHm3p_EZiD41 .pm_math_5lC3IszGdR4rbV7F9bwVU_;}void
pm_math_lw5gZvpV8tGUXztG5uNcm2(const real_T*pm_math_UlTac2Z5H9S91rOURuT4m0,
uint32_T pm_math_fRcLIL8_e1U5rpzJCf0eA2,real_T*pm_math_en5QgqRw1yy_sirSLZOaW_)
{real_T pm_math_vB_NaGB5YPv1YtL_3p6Z20=0.0;uint32_T
pm_math_SmSSPSQfR1qEYWsVj5ELF0;const real_T*pm_math_sZtRrzHnIsLJp30Svm8JS1=
pm_math_UlTac2Z5H9S91rOURuT4m0;for(pm_math_SmSSPSQfR1qEYWsVj5ELF0=0;
pm_math_SmSSPSQfR1qEYWsVj5ELF0<pm_math_fRcLIL8_e1U5rpzJCf0eA2;++
pm_math_SmSSPSQfR1qEYWsVj5ELF0){{if(fabs(pm_math_vB_NaGB5YPv1YtL_3p6Z20)>fabs(
*pm_math_sZtRrzHnIsLJp30Svm8JS1)){real_T pm_math_doOfPIYT9K9GThJTZHTS__=(*
pm_math_sZtRrzHnIsLJp30Svm8JS1)/(pm_math_vB_NaGB5YPv1YtL_3p6Z20);(
pm_math_vB_NaGB5YPv1YtL_3p6Z20)=(fabs(pm_math_vB_NaGB5YPv1YtL_3p6Z20)*sqrt(1+
pm_math_doOfPIYT9K9GThJTZHTS__*pm_math_doOfPIYT9K9GThJTZHTS__));}else{if((*
pm_math_sZtRrzHnIsLJp30Svm8JS1)==0.0){(pm_math_vB_NaGB5YPv1YtL_3p6Z20)=0.0;}
else{real_T pm_math_doOfPIYT9K9GThJTZHTS__=(pm_math_vB_NaGB5YPv1YtL_3p6Z20)/(*
pm_math_sZtRrzHnIsLJp30Svm8JS1);(pm_math_vB_NaGB5YPv1YtL_3p6Z20)=(fabs(*
pm_math_sZtRrzHnIsLJp30Svm8JS1)*sqrt(1+pm_math_doOfPIYT9K9GThJTZHTS__*
pm_math_doOfPIYT9K9GThJTZHTS__));}}};pm_math_sZtRrzHnIsLJp30Svm8JS1++;}*
pm_math_en5QgqRw1yy_sirSLZOaW_=pm_math_vB_NaGB5YPv1YtL_3p6Z20;}void
pm_math_lin_alg_qrFactor(uint32_T pm_math_gN74BbsU5wqNjkJbC9b672,uint32_T n,
real_T*x,real_T*pm_math_VTF2UfH8BZtl6UY_DYsxe1,int32_T*
pm_math_faz4xAO7ZxLl721PFFQIb0,real_T*pm_math_9vzhxzKknmyaJetRZA1K51){uint32_T
pm_math_SmSSPSQfR1qEYWsVj5ELF0,pm_math_OUB2pptsvtdGL_LyqpgOa0,
pm_math_YrCUlzK4id__4KusHKvHS1,pm_math_QHNSjd8JBrVVYZAcs7Zm32,
pm_math_kjCJBhQCQatgcg65OYZoW1,pm_math_tO_2AGXYk_7kaVv47mlXd2,
pm_math_UJCRAj4GBPeBE9JNBhd_52,pm_math_H33pJu_GC0PP6IQiOOdrn2,
pm_math_KqcM2ojlM8d2bfvRoXrF21;real_T pm_math_aoel664zPcTjzpXADn7l40,
pm_math_GMcZXG_wMtdJNkxfzEIfU_,pm_math_QycFQn8jlkFilZrmBy54X2,
pm_math_67SQv_75p606wOlfIPVF71,pm_math_F6LtXE3E_wqYUyZN8tV5a1=0.0,*
pm_math_2tkrfmalfIjExbir9TXPl1,*pm_math_pctqGaJlyQUDyiqEOIIr40,
pm_math_cIkv6hmQPFxeesPKKrIOr0;uint32_T pm_math_17r78ahs8BWSPrDmOWEwJ_,
pm_math_WlZTISPKhkA8rUkPqZpld_,pm_math_6lGvdRckbeA_gCTrOf7IB0,
pm_math_N4y8ud8Oo_vEHTA1qIo5b_,pm_math_S6X3GZrjtvb8Vd3yQHwza_;int32_T*
pm_math_CFoOuHsrMh46q7249PKtU2;;pm_math_tO_2AGXYk_7kaVv47mlXd2=0;
pm_math_UJCRAj4GBPeBE9JNBhd_52=n;for(pm_math_OUB2pptsvtdGL_LyqpgOa0=0;
pm_math_OUB2pptsvtdGL_LyqpgOa0<n;pm_math_OUB2pptsvtdGL_LyqpgOa0++){
pm_math_CFoOuHsrMh46q7249PKtU2= &pm_math_faz4xAO7ZxLl721PFFQIb0[
pm_math_OUB2pptsvtdGL_LyqpgOa0];pm_math_KqcM2ojlM8d2bfvRoXrF21=(*
pm_math_CFoOuHsrMh46q7249PKtU2>0);*pm_math_CFoOuHsrMh46q7249PKtU2=(*
pm_math_CFoOuHsrMh46q7249PKtU2<0)?(-(int32_T)(pm_math_OUB2pptsvtdGL_LyqpgOa0+1
)):((int32_T)pm_math_OUB2pptsvtdGL_LyqpgOa0);if(pm_math_KqcM2ojlM8d2bfvRoXrF21
){if(pm_math_OUB2pptsvtdGL_LyqpgOa0!=pm_math_tO_2AGXYk_7kaVv47mlXd2){
pm_math_17r78ahs8BWSPrDmOWEwJ_=pm_math_tO_2AGXYk_7kaVv47mlXd2*
pm_math_gN74BbsU5wqNjkJbC9b672;pm_math_WlZTISPKhkA8rUkPqZpld_=
pm_math_OUB2pptsvtdGL_LyqpgOa0*pm_math_gN74BbsU5wqNjkJbC9b672;
pm_math_2tkrfmalfIjExbir9TXPl1=x+pm_math_17r78ahs8BWSPrDmOWEwJ_;
pm_math_pctqGaJlyQUDyiqEOIIr40=x+pm_math_WlZTISPKhkA8rUkPqZpld_;for(
pm_math_SmSSPSQfR1qEYWsVj5ELF0=pm_math_gN74BbsU5wqNjkJbC9b672;
pm_math_SmSSPSQfR1qEYWsVj5ELF0-->0;){pm_math_F6LtXE3E_wqYUyZN8tV5a1= *
pm_math_2tkrfmalfIjExbir9TXPl1;*pm_math_2tkrfmalfIjExbir9TXPl1= *
pm_math_pctqGaJlyQUDyiqEOIIr40;*pm_math_pctqGaJlyQUDyiqEOIIr40=
pm_math_F6LtXE3E_wqYUyZN8tV5a1;pm_math_2tkrfmalfIjExbir9TXPl1++;
pm_math_pctqGaJlyQUDyiqEOIIr40++;}}*pm_math_CFoOuHsrMh46q7249PKtU2=
pm_math_faz4xAO7ZxLl721PFFQIb0[pm_math_tO_2AGXYk_7kaVv47mlXd2];
pm_math_faz4xAO7ZxLl721PFFQIb0[pm_math_tO_2AGXYk_7kaVv47mlXd2++]=
pm_math_OUB2pptsvtdGL_LyqpgOa0;}}pm_math_UJCRAj4GBPeBE9JNBhd_52=n;for(
pm_math_OUB2pptsvtdGL_LyqpgOa0=pm_math_UJCRAj4GBPeBE9JNBhd_52-1;
pm_math_OUB2pptsvtdGL_LyqpgOa0!=(uint32_T)-1;pm_math_OUB2pptsvtdGL_LyqpgOa0--)
{if(*(pm_math_CFoOuHsrMh46q7249PKtU2= &pm_math_faz4xAO7ZxLl721PFFQIb0[
pm_math_OUB2pptsvtdGL_LyqpgOa0])<0){*pm_math_CFoOuHsrMh46q7249PKtU2=(-*
pm_math_CFoOuHsrMh46q7249PKtU2)-1;--pm_math_UJCRAj4GBPeBE9JNBhd_52;if(
pm_math_OUB2pptsvtdGL_LyqpgOa0!=pm_math_UJCRAj4GBPeBE9JNBhd_52){
pm_math_17r78ahs8BWSPrDmOWEwJ_=pm_math_UJCRAj4GBPeBE9JNBhd_52*
pm_math_gN74BbsU5wqNjkJbC9b672;pm_math_WlZTISPKhkA8rUkPqZpld_=
pm_math_OUB2pptsvtdGL_LyqpgOa0*pm_math_gN74BbsU5wqNjkJbC9b672;
pm_math_2tkrfmalfIjExbir9TXPl1=x+pm_math_17r78ahs8BWSPrDmOWEwJ_;
pm_math_pctqGaJlyQUDyiqEOIIr40=x+pm_math_WlZTISPKhkA8rUkPqZpld_;for(
pm_math_SmSSPSQfR1qEYWsVj5ELF0=pm_math_gN74BbsU5wqNjkJbC9b672;
pm_math_SmSSPSQfR1qEYWsVj5ELF0-->0;){pm_math_F6LtXE3E_wqYUyZN8tV5a1= *
pm_math_2tkrfmalfIjExbir9TXPl1;*pm_math_2tkrfmalfIjExbir9TXPl1= *
pm_math_pctqGaJlyQUDyiqEOIIr40;*pm_math_pctqGaJlyQUDyiqEOIIr40=
pm_math_F6LtXE3E_wqYUyZN8tV5a1;pm_math_2tkrfmalfIjExbir9TXPl1++;
pm_math_pctqGaJlyQUDyiqEOIIr40++;}pm_math_YrCUlzK4id__4KusHKvHS1=
pm_math_faz4xAO7ZxLl721PFFQIb0[pm_math_UJCRAj4GBPeBE9JNBhd_52];
pm_math_faz4xAO7ZxLl721PFFQIb0[pm_math_UJCRAj4GBPeBE9JNBhd_52]= *
pm_math_CFoOuHsrMh46q7249PKtU2;*pm_math_CFoOuHsrMh46q7249PKtU2=
pm_math_YrCUlzK4id__4KusHKvHS1;}}}if(pm_math_gN74BbsU5wqNjkJbC9b672*n!=0){;for
(pm_math_OUB2pptsvtdGL_LyqpgOa0=pm_math_tO_2AGXYk_7kaVv47mlXd2;
pm_math_OUB2pptsvtdGL_LyqpgOa0<pm_math_UJCRAj4GBPeBE9JNBhd_52;
pm_math_OUB2pptsvtdGL_LyqpgOa0++){pm_math_WlZTISPKhkA8rUkPqZpld_=
pm_math_OUB2pptsvtdGL_LyqpgOa0*pm_math_gN74BbsU5wqNjkJbC9b672;
pm_math_lw5gZvpV8tGUXztG5uNcm2(x+pm_math_WlZTISPKhkA8rUkPqZpld_,
pm_math_gN74BbsU5wqNjkJbC9b672,&pm_math_F6LtXE3E_wqYUyZN8tV5a1);
pm_math_9vzhxzKknmyaJetRZA1K51[pm_math_OUB2pptsvtdGL_LyqpgOa0]=
pm_math_VTF2UfH8BZtl6UY_DYsxe1[pm_math_OUB2pptsvtdGL_LyqpgOa0]=
pm_math_F6LtXE3E_wqYUyZN8tV5a1;}for(pm_math_QHNSjd8JBrVVYZAcs7Zm32=0;
pm_math_QHNSjd8JBrVVYZAcs7Zm32<((pm_math_gN74BbsU5wqNjkJbC9b672)<(n)?(
pm_math_gN74BbsU5wqNjkJbC9b672):(n));pm_math_QHNSjd8JBrVVYZAcs7Zm32++){
pm_math_H33pJu_GC0PP6IQiOOdrn2=pm_math_gN74BbsU5wqNjkJbC9b672-
pm_math_QHNSjd8JBrVVYZAcs7Zm32;if(pm_math_QHNSjd8JBrVVYZAcs7Zm32>=
pm_math_tO_2AGXYk_7kaVv47mlXd2&&pm_math_QHNSjd8JBrVVYZAcs7Zm32+1<
pm_math_UJCRAj4GBPeBE9JNBhd_52){pm_math_QycFQn8jlkFilZrmBy54X2=0.0;
pm_math_kjCJBhQCQatgcg65OYZoW1=pm_math_QHNSjd8JBrVVYZAcs7Zm32;for(
pm_math_OUB2pptsvtdGL_LyqpgOa0=pm_math_QHNSjd8JBrVVYZAcs7Zm32;
pm_math_OUB2pptsvtdGL_LyqpgOa0<pm_math_UJCRAj4GBPeBE9JNBhd_52;
pm_math_OUB2pptsvtdGL_LyqpgOa0++){if(pm_math_VTF2UfH8BZtl6UY_DYsxe1[
pm_math_OUB2pptsvtdGL_LyqpgOa0]>pm_math_QycFQn8jlkFilZrmBy54X2){
pm_math_QycFQn8jlkFilZrmBy54X2=pm_math_VTF2UfH8BZtl6UY_DYsxe1[
pm_math_OUB2pptsvtdGL_LyqpgOa0];pm_math_kjCJBhQCQatgcg65OYZoW1=
pm_math_OUB2pptsvtdGL_LyqpgOa0;}}if(pm_math_kjCJBhQCQatgcg65OYZoW1!=
pm_math_QHNSjd8JBrVVYZAcs7Zm32){pm_math_6lGvdRckbeA_gCTrOf7IB0=
pm_math_QHNSjd8JBrVVYZAcs7Zm32*pm_math_gN74BbsU5wqNjkJbC9b672;
pm_math_WlZTISPKhkA8rUkPqZpld_=pm_math_kjCJBhQCQatgcg65OYZoW1*
pm_math_gN74BbsU5wqNjkJbC9b672;pm_math_2tkrfmalfIjExbir9TXPl1=x+
pm_math_6lGvdRckbeA_gCTrOf7IB0;pm_math_pctqGaJlyQUDyiqEOIIr40=x+
pm_math_WlZTISPKhkA8rUkPqZpld_;for(pm_math_SmSSPSQfR1qEYWsVj5ELF0=
pm_math_gN74BbsU5wqNjkJbC9b672;pm_math_SmSSPSQfR1qEYWsVj5ELF0-->0;){
pm_math_F6LtXE3E_wqYUyZN8tV5a1= *pm_math_2tkrfmalfIjExbir9TXPl1;*
pm_math_2tkrfmalfIjExbir9TXPl1= *pm_math_pctqGaJlyQUDyiqEOIIr40;*
pm_math_pctqGaJlyQUDyiqEOIIr40=pm_math_F6LtXE3E_wqYUyZN8tV5a1;
pm_math_2tkrfmalfIjExbir9TXPl1++;pm_math_pctqGaJlyQUDyiqEOIIr40++;}
pm_math_VTF2UfH8BZtl6UY_DYsxe1[pm_math_kjCJBhQCQatgcg65OYZoW1]=
pm_math_VTF2UfH8BZtl6UY_DYsxe1[pm_math_QHNSjd8JBrVVYZAcs7Zm32];
pm_math_9vzhxzKknmyaJetRZA1K51[pm_math_kjCJBhQCQatgcg65OYZoW1]=
pm_math_9vzhxzKknmyaJetRZA1K51[pm_math_QHNSjd8JBrVVYZAcs7Zm32];
pm_math_YrCUlzK4id__4KusHKvHS1=pm_math_faz4xAO7ZxLl721PFFQIb0[
pm_math_kjCJBhQCQatgcg65OYZoW1];pm_math_faz4xAO7ZxLl721PFFQIb0[
pm_math_kjCJBhQCQatgcg65OYZoW1]=pm_math_faz4xAO7ZxLl721PFFQIb0[
pm_math_QHNSjd8JBrVVYZAcs7Zm32];pm_math_faz4xAO7ZxLl721PFFQIb0[
pm_math_QHNSjd8JBrVVYZAcs7Zm32]=pm_math_YrCUlzK4id__4KusHKvHS1;}}
pm_math_VTF2UfH8BZtl6UY_DYsxe1[pm_math_QHNSjd8JBrVVYZAcs7Zm32]=0.0;if(
pm_math_QHNSjd8JBrVVYZAcs7Zm32==(pm_math_gN74BbsU5wqNjkJbC9b672-1)){continue;}
pm_math_N4y8ud8Oo_vEHTA1qIo5b_=pm_math_QHNSjd8JBrVVYZAcs7Zm32*(
pm_math_gN74BbsU5wqNjkJbC9b672+1);pm_math_2tkrfmalfIjExbir9TXPl1=x+
pm_math_N4y8ud8Oo_vEHTA1qIo5b_;pm_math_lw5gZvpV8tGUXztG5uNcm2(
pm_math_2tkrfmalfIjExbir9TXPl1,pm_math_H33pJu_GC0PP6IQiOOdrn2,&
pm_math_GMcZXG_wMtdJNkxfzEIfU_);if(fabs(pm_math_GMcZXG_wMtdJNkxfzEIfU_)==0.0){
continue;}if(fabs(*pm_math_2tkrfmalfIjExbir9TXPl1)!=0.0){
pm_math_GMcZXG_wMtdJNkxfzEIfU_=(*pm_math_2tkrfmalfIjExbir9TXPl1>=0.0)?fabs(
pm_math_GMcZXG_wMtdJNkxfzEIfU_):-fabs(pm_math_GMcZXG_wMtdJNkxfzEIfU_);}
pm_math_pctqGaJlyQUDyiqEOIIr40=pm_math_2tkrfmalfIjExbir9TXPl1;
pm_math_cIkv6hmQPFxeesPKKrIOr0=5.0e-20*pm_math_GMcZXG_wMtdJNkxfzEIfU_;if(
pm_math_cIkv6hmQPFxeesPKKrIOr0!=0.0){pm_math_F6LtXE3E_wqYUyZN8tV5a1=1.0/
pm_math_GMcZXG_wMtdJNkxfzEIfU_;for(pm_math_SmSSPSQfR1qEYWsVj5ELF0=
pm_math_H33pJu_GC0PP6IQiOOdrn2;pm_math_SmSSPSQfR1qEYWsVj5ELF0-->0;){*
pm_math_pctqGaJlyQUDyiqEOIIr40*=pm_math_F6LtXE3E_wqYUyZN8tV5a1;
pm_math_pctqGaJlyQUDyiqEOIIr40++;}}else{for(pm_math_SmSSPSQfR1qEYWsVj5ELF0=
pm_math_H33pJu_GC0PP6IQiOOdrn2;pm_math_SmSSPSQfR1qEYWsVj5ELF0-->0;){*
pm_math_pctqGaJlyQUDyiqEOIIr40/=pm_math_GMcZXG_wMtdJNkxfzEIfU_;
pm_math_pctqGaJlyQUDyiqEOIIr40++;}}*pm_math_2tkrfmalfIjExbir9TXPl1+=1.0;for(
pm_math_OUB2pptsvtdGL_LyqpgOa0=pm_math_QHNSjd8JBrVVYZAcs7Zm32+1;
pm_math_OUB2pptsvtdGL_LyqpgOa0<n;pm_math_OUB2pptsvtdGL_LyqpgOa0++){
pm_math_S6X3GZrjtvb8Vd3yQHwza_=pm_math_OUB2pptsvtdGL_LyqpgOa0*
pm_math_gN74BbsU5wqNjkJbC9b672+pm_math_QHNSjd8JBrVVYZAcs7Zm32;
pm_math_pctqGaJlyQUDyiqEOIIr40=x+pm_math_S6X3GZrjtvb8Vd3yQHwza_;
pm_math_aoel664zPcTjzpXADn7l40=0.0;for(pm_math_SmSSPSQfR1qEYWsVj5ELF0=
pm_math_H33pJu_GC0PP6IQiOOdrn2;pm_math_SmSSPSQfR1qEYWsVj5ELF0-->0;){
pm_math_aoel664zPcTjzpXADn7l40-=(*pm_math_2tkrfmalfIjExbir9TXPl1)*(*
pm_math_pctqGaJlyQUDyiqEOIIr40);pm_math_2tkrfmalfIjExbir9TXPl1++;
pm_math_pctqGaJlyQUDyiqEOIIr40++;}pm_math_2tkrfmalfIjExbir9TXPl1=x+
pm_math_N4y8ud8Oo_vEHTA1qIo5b_;pm_math_pctqGaJlyQUDyiqEOIIr40=x+
pm_math_S6X3GZrjtvb8Vd3yQHwza_;pm_math_aoel664zPcTjzpXADn7l40/= *
pm_math_2tkrfmalfIjExbir9TXPl1;for(pm_math_SmSSPSQfR1qEYWsVj5ELF0=
pm_math_H33pJu_GC0PP6IQiOOdrn2;pm_math_SmSSPSQfR1qEYWsVj5ELF0-->0;){*
pm_math_pctqGaJlyQUDyiqEOIIr40+=pm_math_aoel664zPcTjzpXADn7l40*(*
pm_math_2tkrfmalfIjExbir9TXPl1);pm_math_2tkrfmalfIjExbir9TXPl1++;
pm_math_pctqGaJlyQUDyiqEOIIr40++;}pm_math_2tkrfmalfIjExbir9TXPl1=x+
pm_math_N4y8ud8Oo_vEHTA1qIo5b_;pm_math_pctqGaJlyQUDyiqEOIIr40=x+
pm_math_S6X3GZrjtvb8Vd3yQHwza_;if(!(pm_math_OUB2pptsvtdGL_LyqpgOa0>=
pm_math_tO_2AGXYk_7kaVv47mlXd2&&pm_math_OUB2pptsvtdGL_LyqpgOa0<
pm_math_UJCRAj4GBPeBE9JNBhd_52)||fabs(pm_math_VTF2UfH8BZtl6UY_DYsxe1[
pm_math_OUB2pptsvtdGL_LyqpgOa0])==0.0){continue;}
pm_math_67SQv_75p606wOlfIPVF71=1.0-pow((fabs(*pm_math_pctqGaJlyQUDyiqEOIIr40)/
pm_math_VTF2UfH8BZtl6UY_DYsxe1[pm_math_OUB2pptsvtdGL_LyqpgOa0]),2.0);if(
pm_math_67SQv_75p606wOlfIPVF71<0.0)pm_math_67SQv_75p606wOlfIPVF71=0.0;
pm_math_aoel664zPcTjzpXADn7l40=pm_math_67SQv_75p606wOlfIPVF71;
pm_math_67SQv_75p606wOlfIPVF71=1.0+0.05*pm_math_67SQv_75p606wOlfIPVF71*pow((
pm_math_VTF2UfH8BZtl6UY_DYsxe1[pm_math_OUB2pptsvtdGL_LyqpgOa0]/
pm_math_9vzhxzKknmyaJetRZA1K51[pm_math_OUB2pptsvtdGL_LyqpgOa0]),2.0);if(
pm_math_67SQv_75p606wOlfIPVF71!=1.0){pm_math_F6LtXE3E_wqYUyZN8tV5a1=sqrt(
pm_math_aoel664zPcTjzpXADn7l40);pm_math_VTF2UfH8BZtl6UY_DYsxe1[
pm_math_OUB2pptsvtdGL_LyqpgOa0]*=pm_math_F6LtXE3E_wqYUyZN8tV5a1;}else{
pm_math_lw5gZvpV8tGUXztG5uNcm2(++pm_math_pctqGaJlyQUDyiqEOIIr40,
pm_math_H33pJu_GC0PP6IQiOOdrn2-1,&pm_math_F6LtXE3E_wqYUyZN8tV5a1);
pm_math_9vzhxzKknmyaJetRZA1K51[pm_math_OUB2pptsvtdGL_LyqpgOa0]=
pm_math_VTF2UfH8BZtl6UY_DYsxe1[pm_math_OUB2pptsvtdGL_LyqpgOa0]=
pm_math_F6LtXE3E_wqYUyZN8tV5a1;}}pm_math_VTF2UfH8BZtl6UY_DYsxe1[
pm_math_QHNSjd8JBrVVYZAcs7Zm32]= *pm_math_2tkrfmalfIjExbir9TXPl1;*
pm_math_2tkrfmalfIjExbir9TXPl1= -pm_math_GMcZXG_wMtdJNkxfzEIfU_;}};return;}
void pm_math_sB06duMOWcuHABCr1_BlH2(uint32_T n,uint32_T
pm_math_OUB2pptsvtdGL_LyqpgOa0,const real_T*pm_math_2kRUucGwF8yJYVACAVBqN2,
const real_T*pm_math_UTW4zxEmIctqtq58lqQl8_,real_T*
pm_math_ET9_5EAP116KvP5KVqsrD2){if((pm_math_2kRUucGwF8yJYVACAVBqN2!=NULL)&&(
fabs(*pm_math_UTW4zxEmIctqtq58lqQl8_)!=0.0)){uint32_T
pm_math_0lm_CGQvoBKzP4IXPDNQz1,pm_math_SmSSPSQfR1qEYWsVj5ELF0,
pm_math_gnSKPtiipcnHNiNJ8y_mr1;real_T pm_math_aoel664zPcTjzpXADn7l40,
pm_math_U938Ucreg_Pd41Eh8sAbX1,*pm_math_gxraG0pWZAgpck1_jL4zE_,*
pm_math_wMvcmToTciOIpb001jAM_0,*pm_math_R_BFs9toZl7AIOvna2Wp52;
pm_math_R_BFs9toZl7AIOvna2Wp52=pm_math_qofsco9r_CpJyn8AsFtev_(
pm_math_2kRUucGwF8yJYVACAVBqN2);pm_math_0lm_CGQvoBKzP4IXPDNQz1=n-
pm_math_OUB2pptsvtdGL_LyqpgOa0;pm_math_gnSKPtiipcnHNiNJ8y_mr1=
pm_math_OUB2pptsvtdGL_LyqpgOa0*(n+1);pm_math_gxraG0pWZAgpck1_jL4zE_=
pm_math_R_BFs9toZl7AIOvna2Wp52+pm_math_gnSKPtiipcnHNiNJ8y_mr1;
pm_math_U938Ucreg_Pd41Eh8sAbX1= *pm_math_gxraG0pWZAgpck1_jL4zE_;*
pm_math_gxraG0pWZAgpck1_jL4zE_= *pm_math_UTW4zxEmIctqtq58lqQl8_;
pm_math_aoel664zPcTjzpXADn7l40=0.0;pm_math_wMvcmToTciOIpb001jAM_0=
pm_math_ET9_5EAP116KvP5KVqsrD2;for(pm_math_SmSSPSQfR1qEYWsVj5ELF0=
pm_math_0lm_CGQvoBKzP4IXPDNQz1;pm_math_SmSSPSQfR1qEYWsVj5ELF0-->0;){
pm_math_aoel664zPcTjzpXADn7l40-=(*pm_math_gxraG0pWZAgpck1_jL4zE_)*(*
pm_math_wMvcmToTciOIpb001jAM_0);pm_math_gxraG0pWZAgpck1_jL4zE_++;
pm_math_wMvcmToTciOIpb001jAM_0++;}pm_math_gxraG0pWZAgpck1_jL4zE_=
pm_math_R_BFs9toZl7AIOvna2Wp52+pm_math_gnSKPtiipcnHNiNJ8y_mr1;
pm_math_aoel664zPcTjzpXADn7l40/= *pm_math_gxraG0pWZAgpck1_jL4zE_;
pm_math_wMvcmToTciOIpb001jAM_0=pm_math_ET9_5EAP116KvP5KVqsrD2;for(
pm_math_SmSSPSQfR1qEYWsVj5ELF0=pm_math_0lm_CGQvoBKzP4IXPDNQz1;
pm_math_SmSSPSQfR1qEYWsVj5ELF0-->0;){*pm_math_wMvcmToTciOIpb001jAM_0+=
pm_math_aoel664zPcTjzpXADn7l40*(*pm_math_gxraG0pWZAgpck1_jL4zE_);
pm_math_gxraG0pWZAgpck1_jL4zE_++;pm_math_wMvcmToTciOIpb001jAM_0++;}
pm_math_gxraG0pWZAgpck1_jL4zE_=pm_math_R_BFs9toZl7AIOvna2Wp52+
pm_math_gnSKPtiipcnHNiNJ8y_mr1;*pm_math_gxraG0pWZAgpck1_jL4zE_=
pm_math_U938Ucreg_Pd41Eh8sAbX1;}}uint32_T pm_math_lin_alg_getRankWithTol(const
real_T*pm_math_2kRUucGwF8yJYVACAVBqN2,uint32_T pm_math_iUEn7qFCQkbRKLoIGRdxq_,
uint32_T pm_math_FydyRMXW9M9hzTCiU6Zd1_,real_T pm_math_IkYq7838pFkQD4JuAdSut_)
{uint32_T pm_math_OUB2pptsvtdGL_LyqpgOa0,pm_math_PIqWtbzrbQqv_KS_31HnE2,
pm_math_mpdqNrM4Mj1enuuR6_LFA1;pm_math_PIqWtbzrbQqv_KS_31HnE2=(uint32_T)-1;if(
pm_math_2kRUucGwF8yJYVACAVBqN2!=NULL){real_T pm_math_yS7VvSIKrGg9ddzBqHtUd_=
fabs(*pm_math_2kRUucGwF8yJYVACAVBqN2)*pm_math_IkYq7838pFkQD4JuAdSut_;
pm_math_mpdqNrM4Mj1enuuR6_LFA1=((pm_math_iUEn7qFCQkbRKLoIGRdxq_)<(
pm_math_FydyRMXW9M9hzTCiU6Zd1_)?(pm_math_iUEn7qFCQkbRKLoIGRdxq_):(
pm_math_FydyRMXW9M9hzTCiU6Zd1_));for(pm_math_OUB2pptsvtdGL_LyqpgOa0=0;
pm_math_OUB2pptsvtdGL_LyqpgOa0<pm_math_mpdqNrM4Mj1enuuR6_LFA1;
pm_math_OUB2pptsvtdGL_LyqpgOa0++){if(fabs(*pm_math_2kRUucGwF8yJYVACAVBqN2)>
pm_math_yS7VvSIKrGg9ddzBqHtUd_)pm_math_PIqWtbzrbQqv_KS_31HnE2=
pm_math_OUB2pptsvtdGL_LyqpgOa0;pm_math_2kRUucGwF8yJYVACAVBqN2+=
pm_math_iUEn7qFCQkbRKLoIGRdxq_+1;}}else{;}return pm_math_PIqWtbzrbQqv_KS_31HnE2
+1;}static uint32_T pm_math_G1zerSPqrNJkqBqk0aji41(const real_T*
pm_math_2kRUucGwF8yJYVACAVBqN2,int32_T pm_math_iUEn7qFCQkbRKLoIGRdxq_,int32_T
pm_math_FydyRMXW9M9hzTCiU6Zd1_){real_T pm_math_IkYq7838pFkQD4JuAdSut_;if(
pm_math_2kRUucGwF8yJYVACAVBqN2!=NULL){pm_math_IkYq7838pFkQD4JuAdSut_=((real_T)
((pm_math_iUEn7qFCQkbRKLoIGRdxq_)>(pm_math_FydyRMXW9M9hzTCiU6Zd1_)?(
pm_math_iUEn7qFCQkbRKLoIGRdxq_):(pm_math_FydyRMXW9M9hzTCiU6Zd1_)))*pmf_get_eps
();return pm_math_lin_alg_getRankWithTol(pm_math_2kRUucGwF8yJYVACAVBqN2,
pm_math_iUEn7qFCQkbRKLoIGRdxq_,pm_math_FydyRMXW9M9hzTCiU6Zd1_,
pm_math_IkYq7838pFkQD4JuAdSut_);}else{;return 0;}}int32_T
pm_math_na7jXpDEM_RdTzTcHW3WL_(int32_T pm_math_gN74BbsU5wqNjkJbC9b672,int32_T
pm_math_PIqWtbzrbQqv_KS_31HnE2,const real_T*pm_math_2kRUucGwF8yJYVACAVBqN2,
const real_T*pm_math_VTF2UfH8BZtl6UY_DYsxe1,real_T*
pm_math_ET9_5EAP116KvP5KVqsrD2){int32_T pm_math_OUB2pptsvtdGL_LyqpgOa0,
pm_math_tzY_8_gONS_Te45_ogt8m1=0;real_T*pm_math_wMvcmToTciOIpb001jAM_0;const
real_T*pm_math_izFrEhVyg60fRycx5wN_t2;pm_math_OUB2pptsvtdGL_LyqpgOa0=((
pm_math_PIqWtbzrbQqv_KS_31HnE2)<(pm_math_gN74BbsU5wqNjkJbC9b672-1)?(
pm_math_PIqWtbzrbQqv_KS_31HnE2):(pm_math_gN74BbsU5wqNjkJbC9b672-1));if(
pm_math_OUB2pptsvtdGL_LyqpgOa0<=0){return(pm_math_tzY_8_gONS_Te45_ogt8m1);};;;
pm_math_izFrEhVyg60fRycx5wN_t2=pm_math_VTF2UfH8BZtl6UY_DYsxe1+
pm_math_OUB2pptsvtdGL_LyqpgOa0-1;pm_math_wMvcmToTciOIpb001jAM_0=
pm_math_ET9_5EAP116KvP5KVqsrD2+pm_math_OUB2pptsvtdGL_LyqpgOa0-1;while(
pm_math_OUB2pptsvtdGL_LyqpgOa0--){pm_math_sB06duMOWcuHABCr1_BlH2(
pm_math_gN74BbsU5wqNjkJbC9b672,pm_math_OUB2pptsvtdGL_LyqpgOa0,
pm_math_2kRUucGwF8yJYVACAVBqN2,pm_math_izFrEhVyg60fRycx5wN_t2--,
pm_math_wMvcmToTciOIpb001jAM_0--);}return(pm_math_tzY_8_gONS_Te45_ogt8m1);}
int32_T pm_math_Jb4_hdHxdhRVpXufkID302(int32_T pm_math_gN74BbsU5wqNjkJbC9b672,
int32_T pm_math_PIqWtbzrbQqv_KS_31HnE2,const real_T*
pm_math_2kRUucGwF8yJYVACAVBqN2,real_T*pm_math_VTF2UfH8BZtl6UY_DYsxe1,real_T*
pm_math_ET9_5EAP116KvP5KVqsrD2){int32_T pm_math_OUB2pptsvtdGL_LyqpgOa0,
pm_math_vaMuEcUHJ0YCjg0YrVca41,pm_math_tzY_8_gONS_Te45_ogt8m1=0;real_T*
pm_math_izFrEhVyg60fRycx5wN_t2,*pm_math_wMvcmToTciOIpb001jAM_0;
pm_math_vaMuEcUHJ0YCjg0YrVca41=((pm_math_PIqWtbzrbQqv_KS_31HnE2)<(
pm_math_gN74BbsU5wqNjkJbC9b672-1)?(pm_math_PIqWtbzrbQqv_KS_31HnE2):(
pm_math_gN74BbsU5wqNjkJbC9b672-1));if(pm_math_vaMuEcUHJ0YCjg0YrVca41<=0){
return(pm_math_tzY_8_gONS_Te45_ogt8m1);};;pm_math_izFrEhVyg60fRycx5wN_t2=
pm_math_VTF2UfH8BZtl6UY_DYsxe1;pm_math_wMvcmToTciOIpb001jAM_0=
pm_math_ET9_5EAP116KvP5KVqsrD2;for(pm_math_OUB2pptsvtdGL_LyqpgOa0=0;
pm_math_OUB2pptsvtdGL_LyqpgOa0<pm_math_vaMuEcUHJ0YCjg0YrVca41;
pm_math_OUB2pptsvtdGL_LyqpgOa0++){pm_math_sB06duMOWcuHABCr1_BlH2(
pm_math_gN74BbsU5wqNjkJbC9b672,pm_math_OUB2pptsvtdGL_LyqpgOa0,
pm_math_2kRUucGwF8yJYVACAVBqN2,pm_math_izFrEhVyg60fRycx5wN_t2++,
pm_math_wMvcmToTciOIpb001jAM_0++);}return(pm_math_tzY_8_gONS_Te45_ogt8m1);}
int32_T pm_math_DflKgXTJgzuIihhPGeKla1(int32_T pm_math_gN74BbsU5wqNjkJbC9b672,
int32_T pm_math_PIqWtbzrbQqv_KS_31HnE2,const real_T*
pm_math_2kRUucGwF8yJYVACAVBqN2,const real_T*pm_math_VTF2UfH8BZtl6UY_DYsxe1,
real_T*b){int32_T pm_math_tzY_8_gONS_Te45_ogt8m1=0;if((
pm_math_gN74BbsU5wqNjkJbC9b672>0)&&(pm_math_PIqWtbzrbQqv_KS_31HnE2>0)){int32_T
pm_math_SmSSPSQfR1qEYWsVj5ELF0,pm_math_OUB2pptsvtdGL_LyqpgOa0,
pm_math_vaMuEcUHJ0YCjg0YrVca41;real_T pm_math_aoel664zPcTjzpXADn7l40,*
pm_math_vPRnvSaJwE8doKwXpqCiC_,*pm_math_GiVA__zEQRkQ75qkVPf8O1;const real_T*
pm_math_gxraG0pWZAgpck1_jL4zE_,*pm_math_izFrEhVyg60fRycx5wN_t2;;
pm_math_vaMuEcUHJ0YCjg0YrVca41=((pm_math_PIqWtbzrbQqv_KS_31HnE2)<(
pm_math_gN74BbsU5wqNjkJbC9b672-1)?(pm_math_PIqWtbzrbQqv_KS_31HnE2):(
pm_math_gN74BbsU5wqNjkJbC9b672-1));if(pm_math_vaMuEcUHJ0YCjg0YrVca41==0){if(
fabs(*pm_math_2kRUucGwF8yJYVACAVBqN2)==0.0){pm_math_tzY_8_gONS_Te45_ogt8m1=1;}
else{*b/= *pm_math_2kRUucGwF8yJYVACAVBqN2;}return(
pm_math_tzY_8_gONS_Te45_ogt8m1);}pm_math_izFrEhVyg60fRycx5wN_t2=
pm_math_VTF2UfH8BZtl6UY_DYsxe1;pm_math_vPRnvSaJwE8doKwXpqCiC_=b;for(
pm_math_OUB2pptsvtdGL_LyqpgOa0=0;pm_math_OUB2pptsvtdGL_LyqpgOa0<
pm_math_vaMuEcUHJ0YCjg0YrVca41;pm_math_OUB2pptsvtdGL_LyqpgOa0++){
pm_math_sB06duMOWcuHABCr1_BlH2(pm_math_gN74BbsU5wqNjkJbC9b672,
pm_math_OUB2pptsvtdGL_LyqpgOa0,pm_math_2kRUucGwF8yJYVACAVBqN2,
pm_math_izFrEhVyg60fRycx5wN_t2++,pm_math_vPRnvSaJwE8doKwXpqCiC_++);}
pm_math_GiVA__zEQRkQ75qkVPf8O1=b+pm_math_PIqWtbzrbQqv_KS_31HnE2-1;for(
pm_math_OUB2pptsvtdGL_LyqpgOa0=pm_math_PIqWtbzrbQqv_KS_31HnE2-1;
pm_math_OUB2pptsvtdGL_LyqpgOa0>=0;pm_math_OUB2pptsvtdGL_LyqpgOa0--){
pm_math_gxraG0pWZAgpck1_jL4zE_=pm_math_2kRUucGwF8yJYVACAVBqN2+
pm_math_OUB2pptsvtdGL_LyqpgOa0*(pm_math_gN74BbsU5wqNjkJbC9b672+1);if(fabs(*
pm_math_gxraG0pWZAgpck1_jL4zE_)==0.0){pm_math_tzY_8_gONS_Te45_ogt8m1=
pm_math_OUB2pptsvtdGL_LyqpgOa0+1;break;}*pm_math_GiVA__zEQRkQ75qkVPf8O1/= *
pm_math_gxraG0pWZAgpck1_jL4zE_;if(pm_math_OUB2pptsvtdGL_LyqpgOa0!=0){
pm_math_aoel664zPcTjzpXADn7l40= -*pm_math_GiVA__zEQRkQ75qkVPf8O1;
pm_math_vPRnvSaJwE8doKwXpqCiC_=b;pm_math_gxraG0pWZAgpck1_jL4zE_-=
pm_math_OUB2pptsvtdGL_LyqpgOa0;for(pm_math_SmSSPSQfR1qEYWsVj5ELF0=
pm_math_OUB2pptsvtdGL_LyqpgOa0;pm_math_SmSSPSQfR1qEYWsVj5ELF0-->0;){*
pm_math_vPRnvSaJwE8doKwXpqCiC_++ +=pm_math_aoel664zPcTjzpXADn7l40**
pm_math_gxraG0pWZAgpck1_jL4zE_++;}}pm_math_GiVA__zEQRkQ75qkVPf8O1--;}}return(
pm_math_tzY_8_gONS_Te45_ogt8m1);}boolean_T pm_math_lin_alg_qrSolveTall(
uint32_T pm_math_gN74BbsU5wqNjkJbC9b672,uint32_T n,const real_T*
pm_math_2kRUucGwF8yJYVACAVBqN2,const real_T*pm_math_VTF2UfH8BZtl6UY_DYsxe1,
int32_T*pm_math_faz4xAO7ZxLl721PFFQIb0,real_T pm_math_dP1Ztx7BuYQ1rmxh9DNmV1,
real_T*pm_math_Xv9d_slQCAr3irmgYeei12){boolean_T pm_math_sUHM3yPOtkwj1FGvtU5LG_
=false;if((pm_math_gN74BbsU5wqNjkJbC9b672>0)&&(n>0)){uint32_T
pm_math_OUB2pptsvtdGL_LyqpgOa0,pm_math_PIqWtbzrbQqv_KS_31HnE2,
pm_math_mpdqNrM4Mj1enuuR6_LFA1;real_T*pm_math_i6qRekrjyKiXo79LSx_Hw_,
pm_math_F6LtXE3E_wqYUyZN8tV5a1,pm_math_H_LAw0hVLLboqbUh5vdZy2=0.0;;
pm_math_PIqWtbzrbQqv_KS_31HnE2=(pm_math_dP1Ztx7BuYQ1rmxh9DNmV1==0.0)?
pm_math_G1zerSPqrNJkqBqk0aji41(pm_math_2kRUucGwF8yJYVACAVBqN2,
pm_math_gN74BbsU5wqNjkJbC9b672,n):pm_math_lin_alg_getRankWithTol(
pm_math_2kRUucGwF8yJYVACAVBqN2,pm_math_gN74BbsU5wqNjkJbC9b672,n,
pm_math_dP1Ztx7BuYQ1rmxh9DNmV1);pm_math_mpdqNrM4Mj1enuuR6_LFA1=((
pm_math_gN74BbsU5wqNjkJbC9b672)<(n)?(pm_math_gN74BbsU5wqNjkJbC9b672):(n));if(
pm_math_PIqWtbzrbQqv_KS_31HnE2<pm_math_mpdqNrM4Mj1enuuR6_LFA1){
pm_math_sUHM3yPOtkwj1FGvtU5LG_=true;}pm_math_DflKgXTJgzuIihhPGeKla1(
pm_math_gN74BbsU5wqNjkJbC9b672,pm_math_PIqWtbzrbQqv_KS_31HnE2,
pm_math_2kRUucGwF8yJYVACAVBqN2,pm_math_VTF2UfH8BZtl6UY_DYsxe1,
pm_math_Xv9d_slQCAr3irmgYeei12);pm_math_i6qRekrjyKiXo79LSx_Hw_=
pm_math_Xv9d_slQCAr3irmgYeei12+pm_math_PIqWtbzrbQqv_KS_31HnE2;for(
pm_math_OUB2pptsvtdGL_LyqpgOa0=n-pm_math_PIqWtbzrbQqv_KS_31HnE2;
pm_math_OUB2pptsvtdGL_LyqpgOa0-->0;){*pm_math_i6qRekrjyKiXo79LSx_Hw_++=
pm_math_H_LAw0hVLLboqbUh5vdZy2;}for(pm_math_OUB2pptsvtdGL_LyqpgOa0=0;
pm_math_OUB2pptsvtdGL_LyqpgOa0<n;pm_math_OUB2pptsvtdGL_LyqpgOa0++){
pm_math_PIqWtbzrbQqv_KS_31HnE2=pm_math_faz4xAO7ZxLl721PFFQIb0[
pm_math_OUB2pptsvtdGL_LyqpgOa0];while(pm_math_PIqWtbzrbQqv_KS_31HnE2!=
pm_math_OUB2pptsvtdGL_LyqpgOa0){pm_math_F6LtXE3E_wqYUyZN8tV5a1= *(
pm_math_Xv9d_slQCAr3irmgYeei12+pm_math_OUB2pptsvtdGL_LyqpgOa0);*(
pm_math_Xv9d_slQCAr3irmgYeei12+pm_math_OUB2pptsvtdGL_LyqpgOa0)= *(
pm_math_Xv9d_slQCAr3irmgYeei12+pm_math_PIqWtbzrbQqv_KS_31HnE2);*(
pm_math_Xv9d_slQCAr3irmgYeei12+pm_math_PIqWtbzrbQqv_KS_31HnE2)=
pm_math_F6LtXE3E_wqYUyZN8tV5a1;pm_math_faz4xAO7ZxLl721PFFQIb0[
pm_math_OUB2pptsvtdGL_LyqpgOa0]=pm_math_faz4xAO7ZxLl721PFFQIb0[
pm_math_PIqWtbzrbQqv_KS_31HnE2];pm_math_faz4xAO7ZxLl721PFFQIb0[
pm_math_PIqWtbzrbQqv_KS_31HnE2]=pm_math_PIqWtbzrbQqv_KS_31HnE2;
pm_math_PIqWtbzrbQqv_KS_31HnE2=pm_math_faz4xAO7ZxLl721PFFQIb0[
pm_math_OUB2pptsvtdGL_LyqpgOa0];}}};return pm_math_sUHM3yPOtkwj1FGvtU5LG_;}
int32_T pm_math_lin_alg_qrSolveWide(const uint32_T
pm_math_gN74BbsU5wqNjkJbC9b672,const uint32_T n,const real_T*
pm_math_2kRUucGwF8yJYVACAVBqN2,const real_T*pm_math_VTF2UfH8BZtl6UY_DYsxe1,
const int32_T*pm_math_faz4xAO7ZxLl721PFFQIb0,const real_T*
pm_math_Xv9d_slQCAr3irmgYeei12,real_T pm_math_dP1Ztx7BuYQ1rmxh9DNmV1,real_T*
pm_math_waI3YdpnU90mfOAMBTb2S1){uint32_T pm_math_PIqWtbzrbQqv_KS_31HnE2=0;if((
pm_math_gN74BbsU5wqNjkJbC9b672>0)&&(n>0)){uint32_T
pm_math_SmSSPSQfR1qEYWsVj5ELF0,pm_math_OUB2pptsvtdGL_LyqpgOa0;;if(
pm_math_faz4xAO7ZxLl721PFFQIb0!=NULL){pm_math_PIqWtbzrbQqv_KS_31HnE2=(
pm_math_dP1Ztx7BuYQ1rmxh9DNmV1==0.0)?pm_math_G1zerSPqrNJkqBqk0aji41(
pm_math_2kRUucGwF8yJYVACAVBqN2,n,pm_math_gN74BbsU5wqNjkJbC9b672):
pm_math_lin_alg_getRankWithTol(pm_math_2kRUucGwF8yJYVACAVBqN2,n,
pm_math_gN74BbsU5wqNjkJbC9b672,pm_math_dP1Ztx7BuYQ1rmxh9DNmV1);for(
pm_math_OUB2pptsvtdGL_LyqpgOa0=0;pm_math_OUB2pptsvtdGL_LyqpgOa0<
pm_math_gN74BbsU5wqNjkJbC9b672;pm_math_OUB2pptsvtdGL_LyqpgOa0++){
pm_math_waI3YdpnU90mfOAMBTb2S1[pm_math_OUB2pptsvtdGL_LyqpgOa0]=
pm_math_Xv9d_slQCAr3irmgYeei12[pm_math_faz4xAO7ZxLl721PFFQIb0[
pm_math_OUB2pptsvtdGL_LyqpgOa0]];}}else{pm_math_PIqWtbzrbQqv_KS_31HnE2=
pm_math_gN74BbsU5wqNjkJbC9b672;memcpy(pm_math_waI3YdpnU90mfOAMBTb2S1,
pm_math_Xv9d_slQCAr3irmgYeei12,pm_math_gN74BbsU5wqNjkJbC9b672*sizeof(real_T));
}for(pm_math_SmSSPSQfR1qEYWsVj5ELF0=0;pm_math_SmSSPSQfR1qEYWsVj5ELF0<
pm_math_PIqWtbzrbQqv_KS_31HnE2;pm_math_SmSSPSQfR1qEYWsVj5ELF0++){for(
pm_math_OUB2pptsvtdGL_LyqpgOa0=0;pm_math_OUB2pptsvtdGL_LyqpgOa0<
pm_math_SmSSPSQfR1qEYWsVj5ELF0;pm_math_OUB2pptsvtdGL_LyqpgOa0++){
pm_math_waI3YdpnU90mfOAMBTb2S1[pm_math_SmSSPSQfR1qEYWsVj5ELF0]-=
pm_math_2kRUucGwF8yJYVACAVBqN2[pm_math_OUB2pptsvtdGL_LyqpgOa0+n*
pm_math_SmSSPSQfR1qEYWsVj5ELF0]*pm_math_waI3YdpnU90mfOAMBTb2S1[
pm_math_OUB2pptsvtdGL_LyqpgOa0];}pm_math_waI3YdpnU90mfOAMBTb2S1[
pm_math_SmSSPSQfR1qEYWsVj5ELF0]/=pm_math_2kRUucGwF8yJYVACAVBqN2[
pm_math_SmSSPSQfR1qEYWsVj5ELF0+n*pm_math_SmSSPSQfR1qEYWsVj5ELF0];}for(
pm_math_SmSSPSQfR1qEYWsVj5ELF0=pm_math_PIqWtbzrbQqv_KS_31HnE2;
pm_math_SmSSPSQfR1qEYWsVj5ELF0<n;pm_math_SmSSPSQfR1qEYWsVj5ELF0++){
pm_math_waI3YdpnU90mfOAMBTb2S1[pm_math_SmSSPSQfR1qEYWsVj5ELF0]=0.0;}
pm_math_na7jXpDEM_RdTzTcHW3WL_(n,pm_math_gN74BbsU5wqNjkJbC9b672,
pm_math_2kRUucGwF8yJYVACAVBqN2,pm_math_VTF2UfH8BZtl6UY_DYsxe1,
pm_math_waI3YdpnU90mfOAMBTb2S1);};return(pm_math_PIqWtbzrbQqv_KS_31HnE2);}
