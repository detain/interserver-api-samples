using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class Server {
    /// <summary>
    /// Gets or Sets IpmiAuth
    /// </summary>
    [DataMember(Name="ipmiAuth", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ipmiAuth")]
    public bool? IpmiAuth { get; set; }

    /// <summary>
    /// Gets or Sets ClientLinks
    /// </summary>
    [DataMember(Name="client_links", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "client_links")]
    public List<ServerClientLink> ClientLinks { get; set; }

    /// <summary>
    /// Gets or Sets BillingDetails
    /// </summary>
    [DataMember(Name="billingDetails", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "billingDetails")]
    public ServerBillingDetails BillingDetails { get; set; }

    /// <summary>
    /// Gets or Sets CustCurrency
    /// </summary>
    [DataMember(Name="custCurrency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "custCurrency")]
    public string CustCurrency { get; set; }

    /// <summary>
    /// Gets or Sets CustCurrencySymbol
    /// </summary>
    [DataMember(Name="custCurrencySymbol", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "custCurrencySymbol")]
    public string CustCurrencySymbol { get; set; }

    /// <summary>
    /// Gets or Sets Package
    /// </summary>
    [DataMember(Name="package", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "package")]
    public string Package { get; set; }

    /// <summary>
    /// Gets or Sets ServiceExtra
    /// </summary>
    [DataMember(Name="serviceExtra", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceExtra")]
    public List<string> ServiceExtra { get; set; }

    /// <summary>
    /// Gets or Sets Locations
    /// </summary>
    [DataMember(Name="locations", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "locations")]
    public ServerLocations Locations { get; set; }

    /// <summary>
    /// Gets or Sets NetworkInfo
    /// </summary>
    [DataMember(Name="networkInfo", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "networkInfo")]
    public ServerNetworkInfo NetworkInfo { get; set; }

    /// <summary>
    /// Gets or Sets ExtraInfoTables
    /// </summary>
    [DataMember(Name="extraInfoTables", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "extraInfoTables")]
    public ServerExtraInfoTables ExtraInfoTables { get; set; }

    /// <summary>
    /// Gets or Sets ServiceInfo
    /// </summary>
    [DataMember(Name="serviceInfo", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceInfo")]
    public ServerServiceInfo ServiceInfo { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Server {\n");
      sb.Append("  IpmiAuth: ").Append(IpmiAuth).Append("\n");
      sb.Append("  ClientLinks: ").Append(ClientLinks).Append("\n");
      sb.Append("  BillingDetails: ").Append(BillingDetails).Append("\n");
      sb.Append("  CustCurrency: ").Append(CustCurrency).Append("\n");
      sb.Append("  CustCurrencySymbol: ").Append(CustCurrencySymbol).Append("\n");
      sb.Append("  Package: ").Append(Package).Append("\n");
      sb.Append("  ServiceExtra: ").Append(ServiceExtra).Append("\n");
      sb.Append("  Locations: ").Append(Locations).Append("\n");
      sb.Append("  NetworkInfo: ").Append(NetworkInfo).Append("\n");
      sb.Append("  ExtraInfoTables: ").Append(ExtraInfoTables).Append("\n");
      sb.Append("  ServiceInfo: ").Append(ServiceInfo).Append("\n");
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
