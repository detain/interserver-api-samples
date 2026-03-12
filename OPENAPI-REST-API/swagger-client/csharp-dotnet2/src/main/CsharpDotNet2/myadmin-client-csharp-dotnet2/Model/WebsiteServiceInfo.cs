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
  public class WebsiteServiceInfo {
    /// <summary>
    /// Website ID
    /// </summary>
    /// <value>Website ID</value>
    [DataMember(Name="website_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_id")]
    public string WebsiteId { get; set; }

    /// <summary>
    /// Website server
    /// </summary>
    /// <value>Website server</value>
    [DataMember(Name="website_server", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_server")]
    public string WebsiteServer { get; set; }

    /// <summary>
    /// Website type
    /// </summary>
    /// <value>Website type</value>
    [DataMember(Name="website_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_type")]
    public string WebsiteType { get; set; }

    /// <summary>
    /// Currency of the website
    /// </summary>
    /// <value>Currency of the website</value>
    [DataMember(Name="website_currency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_currency")]
    public string WebsiteCurrency { get; set; }

    /// <summary>
    /// Order date of the website
    /// </summary>
    /// <value>Order date of the website</value>
    [DataMember(Name="website_order_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_order_date")]
    public string WebsiteOrderDate { get; set; }

    /// <summary>
    /// Customer ID of the website
    /// </summary>
    /// <value>Customer ID of the website</value>
    [DataMember(Name="website_custid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_custid")]
    public string WebsiteCustid { get; set; }

    /// <summary>
    /// IP address of the website
    /// </summary>
    /// <value>IP address of the website</value>
    [DataMember(Name="website_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_ip")]
    public string WebsiteIp { get; set; }

    /// <summary>
    /// Status of the website
    /// </summary>
    /// <value>Status of the website</value>
    [DataMember(Name="website_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_status")]
    public string WebsiteStatus { get; set; }

    /// <summary>
    /// Invoice of the website
    /// </summary>
    /// <value>Invoice of the website</value>
    [DataMember(Name="website_invoice", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_invoice")]
    public string WebsiteInvoice { get; set; }

    /// <summary>
    /// Coupon for the website
    /// </summary>
    /// <value>Coupon for the website</value>
    [DataMember(Name="website_coupon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_coupon")]
    public string WebsiteCoupon { get; set; }

    /// <summary>
    /// Extra information in JSON format for the website
    /// </summary>
    /// <value>Extra information in JSON format for the website</value>
    [DataMember(Name="website_extra", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_extra")]
    public string WebsiteExtra { get; set; }

    /// <summary>
    /// Hostname of the website
    /// </summary>
    /// <value>Hostname of the website</value>
    [DataMember(Name="website_hostname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_hostname")]
    public string WebsiteHostname { get; set; }

    /// <summary>
    /// Comment for the website
    /// </summary>
    /// <value>Comment for the website</value>
    [DataMember(Name="website_comment", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_comment")]
    public string WebsiteComment { get; set; }

    /// <summary>
    /// Username for the website
    /// </summary>
    /// <value>Username for the website</value>
    [DataMember(Name="website_username", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_username")]
    public string WebsiteUsername { get; set; }

    /// <summary>
    /// Server status of the website
    /// </summary>
    /// <value>Server status of the website</value>
    [DataMember(Name="website_server_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_server_status")]
    public string WebsiteServerStatus { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class WebsiteServiceInfo {\n");
      sb.Append("  WebsiteId: ").Append(WebsiteId).Append("\n");
      sb.Append("  WebsiteServer: ").Append(WebsiteServer).Append("\n");
      sb.Append("  WebsiteType: ").Append(WebsiteType).Append("\n");
      sb.Append("  WebsiteCurrency: ").Append(WebsiteCurrency).Append("\n");
      sb.Append("  WebsiteOrderDate: ").Append(WebsiteOrderDate).Append("\n");
      sb.Append("  WebsiteCustid: ").Append(WebsiteCustid).Append("\n");
      sb.Append("  WebsiteIp: ").Append(WebsiteIp).Append("\n");
      sb.Append("  WebsiteStatus: ").Append(WebsiteStatus).Append("\n");
      sb.Append("  WebsiteInvoice: ").Append(WebsiteInvoice).Append("\n");
      sb.Append("  WebsiteCoupon: ").Append(WebsiteCoupon).Append("\n");
      sb.Append("  WebsiteExtra: ").Append(WebsiteExtra).Append("\n");
      sb.Append("  WebsiteHostname: ").Append(WebsiteHostname).Append("\n");
      sb.Append("  WebsiteComment: ").Append(WebsiteComment).Append("\n");
      sb.Append("  WebsiteUsername: ").Append(WebsiteUsername).Append("\n");
      sb.Append("  WebsiteServerStatus: ").Append(WebsiteServerStatus).Append("\n");
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
