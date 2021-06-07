#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>
# define PONY "                                                               \n                                                 H    H         \n                                            %%% HH   HH         \n                                         %%%%% HHH%%HHH         \n                                        %%%%% HHH %%% H         \n                                      %%%%%% HHH %%% HHH        \n                                       %%%% HH %% HHHHHHH       \n                                      %%%%% H %% HOHHHHH        \n                                    %%%%%% H % HHHHHHHHH        \n                                   %%%%% HHHHH HHHHHHHHH        \n                         HHH        %% HHHHHHH HHHHHHHHH        \n                %%% HHHHHHHHHHHH    HHHHHHHHHHH HHHHHHHH        \n             %%%% HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH HHHHHHH       \n           %%%%% HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH HHHHHH      \n         %%%%%% HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH HCHHH      \n        %%%%%% HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH  HHH       \n        %%%%% HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH           \n       %%%%%% HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH          \n    % %%%%%%% HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH          \n     %%%%%%%%% HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH          \n    %%%%%%%%%% HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH         \n %%% %%%%%%%%   HHHHHH HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH         \n   %%%%%%%%      HHHHHH HHHHHHHHHHHHHHHHHHHH HHHHHHHHHH         \n% %%%%%%%%        HHHHHHH HHHHHHHHHHH HHHHHH HHHHHHHHHH         \n %%%%%%%%%         HHHHHHH  HHHHHHHHHHH HHHHHH HHHHHHHH         \n%%%%%%%%%%          HHHHH HHH  HHHHHHHHH HHHHHHH HHHHHH         \n %%%%%%%%%%          HHHH HH               HHHHHHH HHHH         \n %%%%%%%%%%%           HH H                  HHHHH HHH          \n  %%  %% % %%         H HH                      HH HHH          \n    %   %    %        H HHH                      H HHH          \n                       H HHH                     HH HHH         \n                       H HHH                     HH HHH         \n                       H HHHH                   HHHH HH         \n                      HHH HHH                  HHHHH HHH        \n                     HHHH  HHH                 HHHH   HH        \n                    HHHHH   HHH                 HH    HH        \n                   HHHHH    HHHH                      HHH       \n                    HH        HHH                     HHH       \n                               HHHH                     HH      \n                                HHHH                    HHH     \n                                                        HHHH    \n                                                         HH     \n"

class Pony
{
private:
	std::string	speed;
	std::string	color;
	std::string	name;
public:
	void		ponySummoner(std::string name, std::string color, std::string speed);
	void		lookAtThisPony();
};

void	ponyOnTheHeap();
void	ponyOnTheStack();

#endif