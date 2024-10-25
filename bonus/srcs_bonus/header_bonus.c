/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzinurov <pzinurov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:45:55 by donghank          #+#    #+#             */
/*   Updated: 2024/10/18 22:11:18 by pzinurov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/minishell_bonus.h"

void	header(void)
{
	printf("\033[1;36m");
	printf("              _       _      __         ____\n");
	printf("   ____ ___  (_)___  (_)____/ /_  ___  / / /\n");
	printf("  / __ `__ \\/ / __ \\/ / ___/ __ \\/ _ \\/ / /\n");
	printf(" / / / / / / / / / / (__  ) / / /  __/ / /\n");
	printf("/_/ /_/ /_/_/_/ /_/_/____/_/ /_/\\___/_/_/\n");
	printf("                   by donghank pzinurov\n");
	printf("\033[0m\n");
}
