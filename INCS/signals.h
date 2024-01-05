/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salowie <salowie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:26:19 by gvardaki          #+#    #+#             */
/*   Updated: 2024/01/04 15:06:14 by salowie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIGNALS_H
# define SIGNALS_H

# include <stdio.h>

void	ft_signal(void);
void	ft_int_handler(int num);
void	ft_quit_handler(int num);
void	ft_sigint_hd(int num);
void	ft_sigint_hdc(int num);
#endif
