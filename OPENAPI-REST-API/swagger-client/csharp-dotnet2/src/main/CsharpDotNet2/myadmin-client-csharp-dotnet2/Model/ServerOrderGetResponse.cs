using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Configuration options and pricing data returned when starting a dedicated server order.
  /// </summary>
  [DataContract]
  public class ServerOrderGetResponse {
    /// <summary>
    /// Gets or Sets FormValues
    /// </summary>
    [DataMember(Name="form_values", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "form_values")]
    public FormValues FormValues { get; set; }

    /// <summary>
    /// Gets or Sets ConfigIds
    /// </summary>
    [DataMember(Name="config_ids", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "config_ids")]
    public ConfigIds ConfigIds { get; set; }

    /// <summary>
    /// Gets or Sets Cpu
    /// </summary>
    [DataMember(Name="cpu", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cpu")]
    public int? Cpu { get; set; }

    /// <summary>
    /// Gets or Sets CpuLi
    /// </summary>
    [DataMember(Name="cpu_li", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cpu_li")]
    public Dictionary<string, Cpu> CpuLi { get; set; }

    /// <summary>
    /// Gets or Sets ConfigLi
    /// </summary>
    [DataMember(Name="config_li", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "config_li")]
    public ConfigLists ConfigLi { get; set; }

    /// <summary>
    /// Gets or Sets FieldLabel
    /// </summary>
    [DataMember(Name="field_label", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "field_label")]
    public Dictionary<string, FieldLabel> FieldLabel { get; set; }

    /// <summary>
    /// Gets or Sets CpuCores
    /// </summary>
    [DataMember(Name="cpu_cores", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cpu_cores")]
    public Dictionary<string, Dictionary<string, CpuWithDefaults>> CpuCores { get; set; }

    /// <summary>
    /// Gets or Sets Frequency
    /// </summary>
    [DataMember(Name="frequency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "frequency")]
    public int? Frequency { get; set; }

    /// <summary>
    /// Gets or Sets Currency
    /// </summary>
    [DataMember(Name="currency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "currency")]
    public string Currency { get; set; }

    /// <summary>
    /// Gets or Sets CurrencySymbol
    /// </summary>
    [DataMember(Name="currencySymbol", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "currencySymbol")]
    public string CurrencySymbol { get; set; }

    /// <summary>
    /// Gets or Sets Country
    /// </summary>
    [DataMember(Name="country", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "country")]
    public string Country { get; set; }

    /// <summary>
    /// Gets or Sets Custid
    /// </summary>
    [DataMember(Name="custid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "custid")]
    public int? Custid { get; set; }

    /// <summary>
    /// Gets or Sets Ima
    /// </summary>
    [DataMember(Name="ima", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ima")]
    public string Ima { get; set; }

    /// <summary>
    /// Gets or Sets Step
    /// </summary>
    [DataMember(Name="step", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "step")]
    public string Step { get; set; }

    /// <summary>
    /// Gets or Sets Regions
    /// </summary>
    [DataMember(Name="regions", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "regions")]
    public List<Region> Regions { get; set; }

    /// <summary>
    /// Gets or Sets AssetServers
    /// </summary>
    [DataMember(Name="asset_servers", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "asset_servers")]
    public List<AssetServer> AssetServers { get; set; }

    /// <summary>
    /// Gets or Sets BuyItServers
    /// </summary>
    [DataMember(Name="buy_it_servers", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "buy_it_servers")]
    public List<Object> BuyItServers { get; set; }

    /// <summary>
    /// Gets or Sets DisplayShowmore
    /// </summary>
    [DataMember(Name="display_showmore", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "display_showmore")]
    public string DisplayShowmore { get; set; }

    /// <summary>
    /// Gets or Sets CustDiscount
    /// </summary>
    [DataMember(Name="cust_discount", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cust_discount")]
    public decimal? CustDiscount { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerOrderGetResponse {\n");
      sb.Append("  FormValues: ").Append(FormValues).Append("\n");
      sb.Append("  ConfigIds: ").Append(ConfigIds).Append("\n");
      sb.Append("  Cpu: ").Append(Cpu).Append("\n");
      sb.Append("  CpuLi: ").Append(CpuLi).Append("\n");
      sb.Append("  ConfigLi: ").Append(ConfigLi).Append("\n");
      sb.Append("  FieldLabel: ").Append(FieldLabel).Append("\n");
      sb.Append("  CpuCores: ").Append(CpuCores).Append("\n");
      sb.Append("  Frequency: ").Append(Frequency).Append("\n");
      sb.Append("  Currency: ").Append(Currency).Append("\n");
      sb.Append("  CurrencySymbol: ").Append(CurrencySymbol).Append("\n");
      sb.Append("  Country: ").Append(Country).Append("\n");
      sb.Append("  Custid: ").Append(Custid).Append("\n");
      sb.Append("  Ima: ").Append(Ima).Append("\n");
      sb.Append("  Step: ").Append(Step).Append("\n");
      sb.Append("  Regions: ").Append(Regions).Append("\n");
      sb.Append("  AssetServers: ").Append(AssetServers).Append("\n");
      sb.Append("  BuyItServers: ").Append(BuyItServers).Append("\n");
      sb.Append("  DisplayShowmore: ").Append(DisplayShowmore).Append("\n");
      sb.Append("  CustDiscount: ").Append(CustDiscount).Append("\n");
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
