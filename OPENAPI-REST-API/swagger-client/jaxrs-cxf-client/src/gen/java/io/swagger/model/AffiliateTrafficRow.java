package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * Affiliate Web Traffic Entry
 **/
@Schema(description="Affiliate Web Traffic Entry")
public class AffiliateTrafficRow   {
  
  @Schema(description = "")
  private String trafficId = null;
  
  @Schema(description = "")
  private String trafficIp = null;
  
  @Schema(description = "")
  private String trafficUrl = null;
  
  @Schema(description = "")
  private String trafficAffiliate = null;
  
  @Schema(description = "")
  private String trafficReferrer = null;
  
  @Schema(description = "")
  private String trafficTimestamp = null;
 /**
   * Get trafficId
   * @return trafficId
  **/
  @JsonProperty("traffic_id")
  public String getTrafficId() {
    return trafficId;
  }

  public void setTrafficId(String trafficId) {
    this.trafficId = trafficId;
  }

  public AffiliateTrafficRow trafficId(String trafficId) {
    this.trafficId = trafficId;
    return this;
  }

 /**
   * Get trafficIp
   * @return trafficIp
  **/
  @JsonProperty("traffic_ip")
  public String getTrafficIp() {
    return trafficIp;
  }

  public void setTrafficIp(String trafficIp) {
    this.trafficIp = trafficIp;
  }

  public AffiliateTrafficRow trafficIp(String trafficIp) {
    this.trafficIp = trafficIp;
    return this;
  }

 /**
   * Get trafficUrl
   * @return trafficUrl
  **/
  @JsonProperty("traffic_url")
  public String getTrafficUrl() {
    return trafficUrl;
  }

  public void setTrafficUrl(String trafficUrl) {
    this.trafficUrl = trafficUrl;
  }

  public AffiliateTrafficRow trafficUrl(String trafficUrl) {
    this.trafficUrl = trafficUrl;
    return this;
  }

 /**
   * Get trafficAffiliate
   * @return trafficAffiliate
  **/
  @JsonProperty("traffic_affiliate")
  public String getTrafficAffiliate() {
    return trafficAffiliate;
  }

  public void setTrafficAffiliate(String trafficAffiliate) {
    this.trafficAffiliate = trafficAffiliate;
  }

  public AffiliateTrafficRow trafficAffiliate(String trafficAffiliate) {
    this.trafficAffiliate = trafficAffiliate;
    return this;
  }

 /**
   * Get trafficReferrer
   * @return trafficReferrer
  **/
  @JsonProperty("traffic_referrer")
  public String getTrafficReferrer() {
    return trafficReferrer;
  }

  public void setTrafficReferrer(String trafficReferrer) {
    this.trafficReferrer = trafficReferrer;
  }

  public AffiliateTrafficRow trafficReferrer(String trafficReferrer) {
    this.trafficReferrer = trafficReferrer;
    return this;
  }

 /**
   * Get trafficTimestamp
   * @return trafficTimestamp
  **/
  @JsonProperty("traffic_timestamp")
  public String getTrafficTimestamp() {
    return trafficTimestamp;
  }

  public void setTrafficTimestamp(String trafficTimestamp) {
    this.trafficTimestamp = trafficTimestamp;
  }

  public AffiliateTrafficRow trafficTimestamp(String trafficTimestamp) {
    this.trafficTimestamp = trafficTimestamp;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AffiliateTrafficRow {\n");
    
    sb.append("    trafficId: ").append(toIndentedString(trafficId)).append("\n");
    sb.append("    trafficIp: ").append(toIndentedString(trafficIp)).append("\n");
    sb.append("    trafficUrl: ").append(toIndentedString(trafficUrl)).append("\n");
    sb.append("    trafficAffiliate: ").append(toIndentedString(trafficAffiliate)).append("\n");
    sb.append("    trafficReferrer: ").append(toIndentedString(trafficReferrer)).append("\n");
    sb.append("    trafficTimestamp: ").append(toIndentedString(trafficTimestamp)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
