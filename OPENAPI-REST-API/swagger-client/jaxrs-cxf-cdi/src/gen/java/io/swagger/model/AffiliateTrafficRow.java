package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * Affiliate Web Traffic Entry
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Affiliate Web Traffic Entry")

public class AffiliateTrafficRow   {
  private String trafficId = null;
  private String trafficIp = null;
  private String trafficUrl = null;
  private String trafficAffiliate = null;
  private String trafficReferrer = null;
  private String trafficTimestamp = null;

  /**
   **/
  public AffiliateTrafficRow trafficId(String trafficId) {
    this.trafficId = trafficId;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("traffic_id")
  @NotNull
  public String getTrafficId() {
    return trafficId;
  }
  public void setTrafficId(String trafficId) {
    this.trafficId = trafficId;
  }

  /**
   **/
  public AffiliateTrafficRow trafficIp(String trafficIp) {
    this.trafficIp = trafficIp;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("traffic_ip")
  @NotNull
  public String getTrafficIp() {
    return trafficIp;
  }
  public void setTrafficIp(String trafficIp) {
    this.trafficIp = trafficIp;
  }

  /**
   **/
  public AffiliateTrafficRow trafficUrl(String trafficUrl) {
    this.trafficUrl = trafficUrl;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("traffic_url")
  @NotNull
  public String getTrafficUrl() {
    return trafficUrl;
  }
  public void setTrafficUrl(String trafficUrl) {
    this.trafficUrl = trafficUrl;
  }

  /**
   **/
  public AffiliateTrafficRow trafficAffiliate(String trafficAffiliate) {
    this.trafficAffiliate = trafficAffiliate;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("traffic_affiliate")
  @NotNull
  public String getTrafficAffiliate() {
    return trafficAffiliate;
  }
  public void setTrafficAffiliate(String trafficAffiliate) {
    this.trafficAffiliate = trafficAffiliate;
  }

  /**
   **/
  public AffiliateTrafficRow trafficReferrer(String trafficReferrer) {
    this.trafficReferrer = trafficReferrer;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("traffic_referrer")
  @NotNull
  public String getTrafficReferrer() {
    return trafficReferrer;
  }
  public void setTrafficReferrer(String trafficReferrer) {
    this.trafficReferrer = trafficReferrer;
  }

  /**
   **/
  public AffiliateTrafficRow trafficTimestamp(String trafficTimestamp) {
    this.trafficTimestamp = trafficTimestamp;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("traffic_timestamp")
  @NotNull
  public String getTrafficTimestamp() {
    return trafficTimestamp;
  }
  public void setTrafficTimestamp(String trafficTimestamp) {
    this.trafficTimestamp = trafficTimestamp;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AffiliateTrafficRow affiliateTrafficRow = (AffiliateTrafficRow) o;
    return Objects.equals(trafficId, affiliateTrafficRow.trafficId) &&
        Objects.equals(trafficIp, affiliateTrafficRow.trafficIp) &&
        Objects.equals(trafficUrl, affiliateTrafficRow.trafficUrl) &&
        Objects.equals(trafficAffiliate, affiliateTrafficRow.trafficAffiliate) &&
        Objects.equals(trafficReferrer, affiliateTrafficRow.trafficReferrer) &&
        Objects.equals(trafficTimestamp, affiliateTrafficRow.trafficTimestamp);
  }

  @Override
  public int hashCode() {
    return Objects.hash(trafficId, trafficIp, trafficUrl, trafficAffiliate, trafficReferrer, trafficTimestamp);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
