#!/usr/bin/env bash

project_name='prog3_pc1a_lab101_v2025_02'
source_code='
  transform.h transform.cpp
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}