using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A CPU option available when ordering a dedicated server.
  /// </summary>
  [DataContract]
  public class ServerOrderCPU {
    /// <summary>
    /// CPU ID.
    /// </summary>
    /// <value>CPU ID.</value>
    [DataMember(Name="id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "id")]
    public string Id { get; set; }

    /// <summary>
    /// CPU price.
    /// </summary>
    /// <value>CPU price.</value>
    [DataMember(Name="price", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "price")]
    public int? Price { get; set; }

    /// <summary>
    /// CPU image.
    /// </summary>
    /// <value>CPU image.</value>
    [DataMember(Name="img", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "img")]
    public string Img { get; set; }

    /// <summary>
    /// Short description of the CPU.
    /// </summary>
    /// <value>Short description of the CPU.</value>
    [DataMember(Name="short_desc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "short_desc")]
    public string ShortDesc { get; set; }

    /// <summary>
    /// Long description of the CPU.
    /// </summary>
    /// <value>Long description of the CPU.</value>
    [DataMember(Name="long_desc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "long_desc")]
    public string LongDesc { get; set; }

    /// <summary>
    /// Location of the CPU.
    /// </summary>
    /// <value>Location of the CPU.</value>
    [DataMember(Name="location", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "location")]
    public string Location { get; set; }

    /// <summary>
    /// Front Side Bus information.
    /// </summary>
    /// <value>Front Side Bus information.</value>
    [DataMember(Name="fsb", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "fsb")]
    public string Fsb { get; set; }

    /// <summary>
    /// Manufacturer information.
    /// </summary>
    /// <value>Manufacturer information.</value>
    [DataMember(Name="manu", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "manu")]
    public string Manu { get; set; }

    /// <summary>
    /// CPU type.
    /// </summary>
    /// <value>CPU type.</value>
    [DataMember(Name="type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "type")]
    public string Type { get; set; }

    /// <summary>
    /// CPU speed.
    /// </summary>
    /// <value>CPU speed.</value>
    [DataMember(Name="speed", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "speed")]
    public string Speed { get; set; }

    /// <summary>
    /// Cache information.
    /// </summary>
    /// <value>Cache information.</value>
    [DataMember(Name="cache", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cache")]
    public string Cache { get; set; }

    /// <summary>
    /// Active status.
    /// </summary>
    /// <value>Active status.</value>
    [DataMember(Name="active", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "active")]
    public string Active { get; set; }

    /// <summary>
    /// Number of cores.
    /// </summary>
    /// <value>Number of cores.</value>
    [DataMember(Name="num_cores", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "num_cores")]
    public string NumCores { get; set; }

    /// <summary>
    /// Number of CPUs.
    /// </summary>
    /// <value>Number of CPUs.</value>
    [DataMember(Name="num_cpus", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "num_cpus")]
    public string NumCpus { get; set; }

    /// <summary>
    /// CPU benchmark.
    /// </summary>
    /// <value>CPU benchmark.</value>
    [DataMember(Name="benchmark", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "benchmark")]
    public string Benchmark { get; set; }

    /// <summary>
    /// Monthly price.
    /// </summary>
    /// <value>Monthly price.</value>
    [DataMember(Name="monthly_price", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "monthly_price")]
    public int? MonthlyPrice { get; set; }

    /// <summary>
    /// Maximum RAM supported.
    /// </summary>
    /// <value>Maximum RAM supported.</value>
    [DataMember(Name="max_ram", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "max_ram")]
    public string MaxRam { get; set; }

    /// <summary>
    /// Minimum RAM required.
    /// </summary>
    /// <value>Minimum RAM required.</value>
    [DataMember(Name="min_ram", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "min_ram")]
    public string MinRam { get; set; }

    /// <summary>
    /// Maximum LFF (Large Form Factor) supported.
    /// </summary>
    /// <value>Maximum LFF (Large Form Factor) supported.</value>
    [DataMember(Name="max_lff", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "max_lff")]
    public string MaxLff { get; set; }

    /// <summary>
    /// Maximum SFF (Small Form Factor) supported.
    /// </summary>
    /// <value>Maximum SFF (Small Form Factor) supported.</value>
    [DataMember(Name="max_sff", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "max_sff")]
    public string MaxSff { get; set; }

    /// <summary>
    /// Maximum NVMe drives supported.
    /// </summary>
    /// <value>Maximum NVMe drives supported.</value>
    [DataMember(Name="max_nve", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "max_nve")]
    public string MaxNve { get; set; }

    /// <summary>
    /// Visibility status.
    /// </summary>
    /// <value>Visibility status.</value>
    [DataMember(Name="visible", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "visible")]
    public string Visible { get; set; }

    /// <summary>
    /// Hard drive IDs.
    /// </summary>
    /// <value>Hard drive IDs.</value>
    [DataMember(Name="hd_ids", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hd_ids")]
    public string HdIds { get; set; }

    /// <summary>
    /// Display of CPU price.
    /// </summary>
    /// <value>Display of CPU price.</value>
    [DataMember(Name="price_display", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "price_display")]
    public string PriceDisplay { get; set; }

    /// <summary>
    /// Display of monthly CPU price.
    /// </summary>
    /// <value>Display of monthly CPU price.</value>
    [DataMember(Name="monthly_price_display", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "monthly_price_display")]
    public string MonthlyPriceDisplay { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerOrderCPU {\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  Price: ").Append(Price).Append("\n");
      sb.Append("  Img: ").Append(Img).Append("\n");
      sb.Append("  ShortDesc: ").Append(ShortDesc).Append("\n");
      sb.Append("  LongDesc: ").Append(LongDesc).Append("\n");
      sb.Append("  Location: ").Append(Location).Append("\n");
      sb.Append("  Fsb: ").Append(Fsb).Append("\n");
      sb.Append("  Manu: ").Append(Manu).Append("\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  Speed: ").Append(Speed).Append("\n");
      sb.Append("  Cache: ").Append(Cache).Append("\n");
      sb.Append("  Active: ").Append(Active).Append("\n");
      sb.Append("  NumCores: ").Append(NumCores).Append("\n");
      sb.Append("  NumCpus: ").Append(NumCpus).Append("\n");
      sb.Append("  Benchmark: ").Append(Benchmark).Append("\n");
      sb.Append("  MonthlyPrice: ").Append(MonthlyPrice).Append("\n");
      sb.Append("  MaxRam: ").Append(MaxRam).Append("\n");
      sb.Append("  MinRam: ").Append(MinRam).Append("\n");
      sb.Append("  MaxLff: ").Append(MaxLff).Append("\n");
      sb.Append("  MaxSff: ").Append(MaxSff).Append("\n");
      sb.Append("  MaxNve: ").Append(MaxNve).Append("\n");
      sb.Append("  Visible: ").Append(Visible).Append("\n");
      sb.Append("  HdIds: ").Append(HdIds).Append("\n");
      sb.Append("  PriceDisplay: ").Append(PriceDisplay).Append("\n");
      sb.Append("  MonthlyPriceDisplay: ").Append(MonthlyPriceDisplay).Append("\n");
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
