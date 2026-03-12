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
  public class WebsiteServiceMaster {
    /// <summary>
    /// Website ID for the service master
    /// </summary>
    /// <value>Website ID for the service master</value>
    [DataMember(Name="website_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_id")]
    public string WebsiteId { get; set; }

    /// <summary>
    /// Website name for the service master
    /// </summary>
    /// <value>Website name for the service master</value>
    [DataMember(Name="website_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_name")]
    public string WebsiteName { get; set; }

    /// <summary>
    /// IP address for the service master
    /// </summary>
    /// <value>IP address for the service master</value>
    [DataMember(Name="website_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_ip")]
    public string WebsiteIp { get; set; }

    /// <summary>
    /// Website type for the service master
    /// </summary>
    /// <value>Website type for the service master</value>
    [DataMember(Name="website_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_type")]
    public string WebsiteType { get; set; }

    /// <summary>
    /// Availability status for the service master
    /// </summary>
    /// <value>Availability status for the service master</value>
    [DataMember(Name="website_available", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_available")]
    public string WebsiteAvailable { get; set; }

    /// <summary>
    /// Hard drive size for the service master
    /// </summary>
    /// <value>Hard drive size for the service master</value>
    [DataMember(Name="website_hdsize", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_hdsize")]
    public string WebsiteHdsize { get; set; }

    /// <summary>
    /// Free hard drive space for the service master
    /// </summary>
    /// <value>Free hard drive space for the service master</value>
    [DataMember(Name="website_hdfree", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_hdfree")]
    public string WebsiteHdfree { get; set; }

    /// <summary>
    /// Load for the service master
    /// </summary>
    /// <value>Load for the service master</value>
    [DataMember(Name="website_load", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_load")]
    public string WebsiteLoad { get; set; }

    /// <summary>
    /// Last update date for the service master
    /// </summary>
    /// <value>Last update date for the service master</value>
    [DataMember(Name="website_last_update", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_last_update")]
    public string WebsiteLastUpdate { get; set; }

    /// <summary>
    /// Maximum number of sites for the service master
    /// </summary>
    /// <value>Maximum number of sites for the service master</value>
    [DataMember(Name="website_max_sites", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_max_sites")]
    public string WebsiteMaxSites { get; set; }

    /// <summary>
    /// Order number for the service master
    /// </summary>
    /// <value>Order number for the service master</value>
    [DataMember(Name="website_order", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_order")]
    public string WebsiteOrder { get; set; }

    /// <summary>
    /// Partitions for the service master
    /// </summary>
    /// <value>Partitions for the service master</value>
    [DataMember(Name="website_partitions", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_partitions")]
    public string WebsitePartitions { get; set; }

    /// <summary>
    /// DNS server 1 for the service master
    /// </summary>
    /// <value>DNS server 1 for the service master</value>
    [DataMember(Name="website_dns1", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_dns1")]
    public string WebsiteDns1 { get; set; }

    /// <summary>
    /// DNS server 2 for the service master
    /// </summary>
    /// <value>DNS server 2 for the service master</value>
    [DataMember(Name="website_dns2", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_dns2")]
    public string WebsiteDns2 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class WebsiteServiceMaster {\n");
      sb.Append("  WebsiteId: ").Append(WebsiteId).Append("\n");
      sb.Append("  WebsiteName: ").Append(WebsiteName).Append("\n");
      sb.Append("  WebsiteIp: ").Append(WebsiteIp).Append("\n");
      sb.Append("  WebsiteType: ").Append(WebsiteType).Append("\n");
      sb.Append("  WebsiteAvailable: ").Append(WebsiteAvailable).Append("\n");
      sb.Append("  WebsiteHdsize: ").Append(WebsiteHdsize).Append("\n");
      sb.Append("  WebsiteHdfree: ").Append(WebsiteHdfree).Append("\n");
      sb.Append("  WebsiteLoad: ").Append(WebsiteLoad).Append("\n");
      sb.Append("  WebsiteLastUpdate: ").Append(WebsiteLastUpdate).Append("\n");
      sb.Append("  WebsiteMaxSites: ").Append(WebsiteMaxSites).Append("\n");
      sb.Append("  WebsiteOrder: ").Append(WebsiteOrder).Append("\n");
      sb.Append("  WebsitePartitions: ").Append(WebsitePartitions).Append("\n");
      sb.Append("  WebsiteDns1: ").Append(WebsiteDns1).Append("\n");
      sb.Append("  WebsiteDns2: ").Append(WebsiteDns2).Append("\n");
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
