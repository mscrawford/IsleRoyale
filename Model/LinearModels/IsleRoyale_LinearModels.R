library(ggthemes)
library(data.table)
library(tidyverse)
library(cowplot)
library(stargazer)

# Read data
d <- read.table("/Users/Th eodore/Documents/Dropbox/Public/IsleRoyale/Model/LinearModels/IsleRoyale.csv",
                header = T,
                sep = ",",
                strip.white = T) %>%
    filter(Year < 1981) %>%
    tbl_df()

# Moose abundance vs. Wolf recruitment, YEARLY
p <- ggplot(d %>% drop_na(m_abundance, w_recruitment),
            aes(x = m_abundance,
                y = w_recruitment)) +
    labs(x = "Moose Abundance",
         y = "Wolf recruitment") +
    geom_point() +
    geom_smooth(method = "lm") +
    theme_few() +
    theme(aspect.ratio = 1); p

save_plot(p,
          filename = "~/Desktop/Abundance_Recruitment.pdf",
          ncol = 1,
          nrow = 1)

# Linear model to get coefficients
l <- lm(d, formula = w_recruitment ~ m_abundance)
summary(l)
stargazer(l, type = "text")
coef(l)

# Moose abundance vs. Wolf kill rate, MONTHLY
p <- ggplot(d %>% drop_na(m_abundance, w_killRate),
            aes(x = m_abundance,
                y = w_killRate)) +
    labs(x = "Moose Abundance",
         y = "Wolf per capital kill rate (monthly)") +
    geom_point() +
    geom_smooth(method = "lm") +
    theme_few() +
    theme(aspect.ratio = 1); p

save_plot(p,
          filename = "~/Desktop/Abundance_KillRate_Monthly.pdf",
          ncol = 1,
          nrow = 1)

# Linear model to get coefficients
l <- lm(d, formula = w_killRate ~ m_abundance)
summary(l)
stargazer(l, type = "text")
coef(l)