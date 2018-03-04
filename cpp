#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int aleatorio(int min, int max){

       return rand()%(max-min+1) + min;
}


		

//P(pai)= 1, M(mãe)= 2, Pol(policial)= 3, Pris(prisioneira)= 4, Fa1(filha1)= 5, Fa2(filha2)= 6, Fo1(filho1)= 7,Fo2(filho2)= 8.

int main(){
	int margem1[8]={1,2,3,4,5,6,7,8}, barco[2], margem2[8], num=0, n=0, pris=0, pol=0,aux=0,p=0,m=0,fa1=0,fa2=0,fo1=0,fo2=0,i=0;
	bool cbarco=false, cm2=false;
	
	do{
		for (i=0;i<2;i++){
			num=aleatorio(0,7);
			barco[i]=num;
		}
	
		for (i=0;i<8;i++){//limpar margem1
		
			if(margem1[i]==barco[0]){
			margem1[i]=0;
			}
			else if(margem1[i]==barco[1]){
				 margem1[i]=0;}
				 
		}
			
			//Verificar possibilidades para o barco
			if((barco[0]==3)&&(barco[1]==4)){
				cbarco=true;
			}
				else if((barco[0]==2)&&(barco[1]==5)){
					cbarco=true;
					}
			
					else if((barco[0]==2)&&(barco[1]==6)){
						cbarco=true;
						}
						
						else if((barco[0]==1)&&(barco[1]==7)){
							cbarco=true;
							}
			
							else  if((barco[0]==1)&&(barco[1]==8)){
								cbarco=true;
								}
			
								else if((barco[0]==1)&&(barco[1]==2)){
									cbarco=true;
									}
									else if((barco[0]==4)&&(barco[1]==3)){
										cbarco=true;
										}
										else if((barco[0]==5)&&(barco[1]==2)){
											cbarco=true;
											}
											else if((barco[0]==6)&&(barco[1]==2)){
												cbarco=true;
												}
												else if((barco[0]==7)&&(barco[1]==1)){
													cbarco=true;
													}
													else if((barco[0]==8)&&(barco[1]==1)){
														cbarco=true;
														}
														else if((barco[0]==2)&&(barco[1]==1)){
															cbarco=true;
															}

		
		if(cbarco==true){
			while(barco[1]=!0){//passar margem2
			
				for(i=0;i<2;i++){
					margem2[n]=barco[i];
					barco[i]=0;
					n++;	
					}
				margem2[n++];
				}
			}
		
		for(i=0;i<8;i++){
			if (margem2[i]==4)
			pris=margem2[i];
			else if(margem2[i]==3)
				pol=margem2[i];
				else if((margem2[i]=!3)||(margem2[i]=!4))
				aux=margem2[i];
				}
		
		if ((pris!=0&&pol==0)&&(pris=!0&&aux!=0)){
			cout<<"Prisioneira bateu em um membro da família\n";
				
								
				for(i=0;i<2;i++){ //barco vai receber policial
					if (barco[i]==3)
						pol=barco[i];
				}
		}
			
		if(cbarco==false){
			if((barco[0]==4)||(barco[1]==4))
			cout<<"Prisioneira bateu em um membro da família.\n";
				else if((barco[0]==1)&&(barco[1]==5))
					cout<<"Pai bateu na filha.\n";
					else if((barco[0]==1)&&(barco[1]==6))
						cout<<"Pai bateu na filha.\n";
						else if((barco[0]==2)&&(barco[1]==7))
							cout<<"Mãe bateu no filho.\n";
							else if((barco[0]==2)&&(barco[1]==8))
								cout<<"Mãe bateu no filho.\n";
								else if((barco[0]==5)&&(barco[1]==1))
									cout<<"Pai bateu na filha.\n";
									else if((barco[0]==6)&&(barco[1]==1))
										cout<<"Pai bateu na filha.\n";
										else if((barco[0]==7)&&(barco[1]==2))
											cout<<"Mãe bateu no filho.\n";
											else if((barco[0]==8)&&(barco[1]==2))
												cout<<"Mãe bateu no filho.\n";
					}
					
		for(i=0;i<8;i++){
			if (margem1[i]==4)
			pris=margem1[i];
			else if(margem1[i]==3)
				pol=margem1[i];
				else if((margem1[i]=!3)||(margem1[i]=!4))
				aux=margem2[i];
				}
		
		if ((pris!=0&&pol==0)&&(pris=!0&&aux!=0)){
			cout<<"Prisioneira bateu em um membro da família\n";
				
				
				for(i=0;i<2;i++){
					if (barco[i]==3)
						pol=barco[i];
				}
				
				do{
					if (margem1[i]==0){
						margem1[i]=pol;
					}
					i++;
					}while (margem1[i]=!0);
					
				}
				
		
		
				
		if((p==0)&&(m==0)){
			barco[0]=pol;
			barco[1]=aux;
			
			cout<<"O barco vai transportar o policial e um dos filhos.\n";
			
		}
		
		for(i=0;i<8;i++){
			if (margem2[i]==4)
			pris=margem2[i];
			else if(margem2[i]==3)
				pol=margem2[i];
				else if(margem2[i]==5)
					fa1=margem2[i];
					else if(margem2[i]==2)
						m=margem2[i];
						else if(margem2[i]==1)
							p=margem2[i];
							else if(margem2[i]==6)
								fa2=margem2[i];
								else if(margem2[i]==7)
									fo1=margem2[i];
									else if(margem2[i]==8)
										fo2=margem2[i];
				}		
				
				if((p=!0)&&(m=!0)){
					if((fa1=!0)||(fa2=!0)){
						if((fo1=!0)||(fo2=!0)){
							barco[0]=pol;
							barco[1]=pris;
							
							while(margem1[i]=!0){
								if(margem1[i]==0)
									margem1[i]=pol;
									i+2;	
							}
				
							int j=1;
							while(margem1[j]=!0){
								if(margem1[j]==0)
									margem1[j]=pris;
									j+2;
							}
					
				
						}
					}	
				}
					
				
	
		
		
		
			
	}while(margem2[7]=!0);
		
		
return 0;
}
