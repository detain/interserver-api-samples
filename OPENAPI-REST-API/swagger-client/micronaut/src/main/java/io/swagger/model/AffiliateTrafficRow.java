package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Affiliate Web Traffic Entry
 */
@Schema(description = "Affiliate Web Traffic Entry")
@Validated
@Introspected

public class AffiliateTrafficRow   {
  @JsonProperty("traffic_id")
  private String trafficId = null;

  @JsonProperty("traffic_ip")
  private String trafficIp = null;

  @JsonProperty("traffic_url")
  private String trafficUrl = null;

  @JsonProperty("traffic_affiliate")
  private String trafficAffiliate = null;

  @JsonProperty("traffic_referrer")
  private String trafficReferrer = null;

  @JsonProperty("traffic_timestamp")
  private String trafficTimestamp = null;

  public AffiliateTrafficRow trafficId(String trafficId) {
    this.trafficId = trafficId;
    return this;
  }

  /**
   * Get trafficId
   * @return trafficId
  **/
  @Schema(description = "")
  @NotNull

  public String getTrafficId() {
    return trafficId;
  }

  public void setTrafficId(String trafficId) {
    this.trafficId = trafficId;
  }

  public AffiliateTrafficRow trafficIp(String trafficIp) {
    this.trafficIp = trafficIp;
    return this;
  }

  /**
   * Get trafficIp
   * @return trafficIp
  **/
  @Schema(description = "")
  @NotNull

  public String getTrafficIp() {
    return trafficIp;
  }

  public void setTrafficIp(String trafficIp) {
    this.trafficIp = trafficIp;
  }

  public AffiliateTrafficRow trafficUrl(String trafficUrl) {
    this.trafficUrl = trafficUrl;
    return this;
  }

  /**
   * Get trafficUrl
   * @return trafficUrl
  **/
  @Schema(description = "")
  @NotNull

  public String getTrafficUrl() {
    return trafficUrl;
  }

  public void setTrafficUrl(String trafficUrl) {
    this.trafficUrl = trafficUrl;
  }

  public AffiliateTrafficRow trafficAffiliate(String trafficAffiliate) {
    this.trafficAffiliate = trafficAffiliate;
    return this;
  }

  /**
   * Get trafficAffiliate
   * @return trafficAffiliate
  **/
  @Schema(description = "")
  @NotNull

  public String getTrafficAffiliate() {
    return trafficAffiliate;
  }

  public void setTrafficAffiliate(String trafficAffiliate) {
    this.trafficAffiliate = trafficAffiliate;
  }

  public AffiliateTrafficRow trafficReferrer(String trafficReferrer) {
    this.trafficReferrer = trafficReferrer;
    return this;
  }

  /**
   * Get trafficReferrer
   * @return trafficReferrer
  **/
  @Schema(description = "")
  @NotNull

  public String getTrafficReferrer() {
    return trafficReferrer;
  }

  public void setTrafficReferrer(String trafficReferrer) {
    this.trafficReferrer = trafficReferrer;
  }

  public AffiliateTrafficRow trafficTimestamp(String trafficTimestamp) {
    this.trafficTimestamp = trafficTimestamp;
    return this;
  }

  /**
   * Get trafficTimestamp
   * @return trafficTimestamp
  **/
  @Schema(description = "")
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
    return Objects.equals(this.trafficId, affiliateTrafficRow.trafficId) &&
        Objects.equals(this.trafficIp, affiliateTrafficRow.trafficIp) &&
        Objects.equals(this.trafficUrl, affiliateTrafficRow.trafficUrl) &&
        Objects.equals(this.trafficAffiliate, affiliateTrafficRow.trafficAffiliate) &&
        Objects.equals(this.trafficReferrer, affiliateTrafficRow.trafficReferrer) &&
        Objects.equals(this.trafficTimestamp, affiliateTrafficRow.trafficTimestamp);
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
