-module(openapi_cpu).

-export([encode/1]).

-export_type([openapi_cpu/0]).

-type openapi_cpu() ::
    #{ 'id' => integer(),
       'short_desc' => binary(),
       'long_desc' => binary(),
       'type' => binary(),
       'speed' => binary(),
       'num_cores' => binary(),
       'num_cpus' => binary(),
       'benchmark' => binary(),
       'monthly_price' => integer(),
       'monthly_price_display' => binary(),
       'max_ram' => binary(),
       'min_ram' => binary(),
       'max_lff' => binary(),
       'max_sff' => binary(),
       'max_nve' => binary(),
       'visible' => binary(),
       'active' => binary()
     }.

encode(#{ 'id' := Id,
          'short_desc' := ShortDesc,
          'long_desc' := LongDesc,
          'type' := Type,
          'speed' := Speed,
          'num_cores' := NumCores,
          'num_cpus' := NumCpus,
          'benchmark' := Benchmark,
          'monthly_price' := MonthlyPrice,
          'monthly_price_display' := MonthlyPriceDisplay,
          'max_ram' := MaxRam,
          'min_ram' := MinRam,
          'max_lff' := MaxLff,
          'max_sff' := MaxSff,
          'max_nve' := MaxNve,
          'visible' := Visible,
          'active' := Active
        }) ->
    #{ 'id' => Id,
       'short_desc' => ShortDesc,
       'long_desc' => LongDesc,
       'type' => Type,
       'speed' => Speed,
       'num_cores' => NumCores,
       'num_cpus' => NumCpus,
       'benchmark' => Benchmark,
       'monthly_price' => MonthlyPrice,
       'monthly_price_display' => MonthlyPriceDisplay,
       'max_ram' => MaxRam,
       'min_ram' => MinRam,
       'max_lff' => MaxLff,
       'max_sff' => MaxSff,
       'max_nve' => MaxNve,
       'visible' => Visible,
       'active' => Active
     }.
