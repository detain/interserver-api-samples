using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A CPU option available for dedicated server ordering.
  /// </summary>
  [DataContract]
  public class Cpu {
    /// <summary>
    /// Gets or Sets Id
    /// </summary>
    [DataMember(Name="id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "id")]
    public int? Id { get; set; }

    /// <summary>
    /// Gets or Sets ShortDesc
    /// </summary>
    [DataMember(Name="short_desc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "short_desc")]
    public string ShortDesc { get; set; }

    /// <summary>
    /// Gets or Sets LongDesc
    /// </summary>
    [DataMember(Name="long_desc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "long_desc")]
    public string LongDesc { get; set; }

    /// <summary>
    /// Gets or Sets Type
    /// </summary>
    [DataMember(Name="type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "type")]
    public string Type { get; set; }

    /// <summary>
    /// Gets or Sets Speed
    /// </summary>
    [DataMember(Name="speed", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "speed")]
    public string Speed { get; set; }

    /// <summary>
    /// Gets or Sets NumCores
    /// </summary>
    [DataMember(Name="num_cores", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "num_cores")]
    public string NumCores { get; set; }

    /// <summary>
    /// Gets or Sets NumCpus
    /// </summary>
    [DataMember(Name="num_cpus", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "num_cpus")]
    public string NumCpus { get; set; }

    /// <summary>
    /// Gets or Sets Benchmark
    /// </summary>
    [DataMember(Name="benchmark", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "benchmark")]
    public string Benchmark { get; set; }

    /// <summary>
    /// Gets or Sets MonthlyPrice
    /// </summary>
    [DataMember(Name="monthly_price", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "monthly_price")]
    public decimal? MonthlyPrice { get; set; }

    /// <summary>
    /// Gets or Sets MonthlyPriceDisplay
    /// </summary>
    [DataMember(Name="monthly_price_display", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "monthly_price_display")]
    public string MonthlyPriceDisplay { get; set; }

    /// <summary>
    /// Gets or Sets MaxRam
    /// </summary>
    [DataMember(Name="max_ram", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "max_ram")]
    public string MaxRam { get; set; }

    /// <summary>
    /// Gets or Sets MinRam
    /// </summary>
    [DataMember(Name="min_ram", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "min_ram")]
    public string MinRam { get; set; }

    /// <summary>
    /// Gets or Sets MaxLff
    /// </summary>
    [DataMember(Name="max_lff", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "max_lff")]
    public string MaxLff { get; set; }

    /// <summary>
    /// Gets or Sets MaxSff
    /// </summary>
    [DataMember(Name="max_sff", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "max_sff")]
    public string MaxSff { get; set; }

    /// <summary>
    /// Gets or Sets MaxNve
    /// </summary>
    [DataMember(Name="max_nve", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "max_nve")]
    public string MaxNve { get; set; }

    /// <summary>
    /// Gets or Sets Visible
    /// </summary>
    [DataMember(Name="visible", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "visible")]
    public string Visible { get; set; }

    /// <summary>
    /// Gets or Sets Active
    /// </summary>
    [DataMember(Name="active", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "active")]
    public string Active { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Cpu {\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  ShortDesc: ").Append(ShortDesc).Append("\n");
      sb.Append("  LongDesc: ").Append(LongDesc).Append("\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  Speed: ").Append(Speed).Append("\n");
      sb.Append("  NumCores: ").Append(NumCores).Append("\n");
      sb.Append("  NumCpus: ").Append(NumCpus).Append("\n");
      sb.Append("  Benchmark: ").Append(Benchmark).Append("\n");
      sb.Append("  MonthlyPrice: ").Append(MonthlyPrice).Append("\n");
      sb.Append("  MonthlyPriceDisplay: ").Append(MonthlyPriceDisplay).Append("\n");
      sb.Append("  MaxRam: ").Append(MaxRam).Append("\n");
      sb.Append("  MinRam: ").Append(MinRam).Append("\n");
      sb.Append("  MaxLff: ").Append(MaxLff).Append("\n");
      sb.Append("  MaxSff: ").Append(MaxSff).Append("\n");
      sb.Append("  MaxNve: ").Append(MaxNve).Append("\n");
      sb.Append("  Visible: ").Append(Visible).Append("\n");
      sb.Append("  Active: ").Append(Active).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}
