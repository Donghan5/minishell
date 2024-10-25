/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghank <donghank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:45:55 by donghank          #+#    #+#             */
/*   Updated: 2024/09/24 14:38:36 by donghank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

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