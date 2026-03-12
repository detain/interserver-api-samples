package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Affiliate Landing Page information.
 **/
@Schema(description = "Affiliate Landing Page information.")


public class AffiliateDockSetup   {
  @JsonProperty("affiliate_dock_title")
  private String affiliateDockTitle = null;
  @JsonProperty("affiliate_dock_description")
  private String affiliateDockDescription = null;
  @JsonProperty("referrer_coupon")
  private String referrerCoupon = null;
  /**
   **/
  public AffiliateDockSetup affiliateDockTitle(String affiliateDockTitle) {
    this.affiliateDockTitle = affiliateDockTitle;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("affiliate_dock_title")
  public String getAffiliateDockTitle() {
    return affiliateDockTitle;
  }
  public void setAffiliateDockTitle(String affiliateDockTitle) {
    this.affiliateDockTitle = affiliateDockTitle;
  }

  /**
   **/
  public AffiliateDockSetup affiliateDockDescription(String affiliateDockDescription) {
    this.affiliateDockDescription = affiliateDockDescription;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("affiliate_dock_description")
  public String getAffiliateDockDescription() {
    return affiliateDockDescription;
  }
  public void setAffiliateDockDescription(String affiliateDockDescription) {
    this.affiliateDockDescription = affiliateDockDescription;
  }

  /**
   **/
  public AffiliateDockSetup referrerCoupon(String referrerCoupon) {
    this.referrerCoupon = referrerCoupon;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("referrer_coupon")
  public String getReferrerCoupon() {
    return referrerCoupon;
  }
  public void setReferrerCoupon(String referrerCoupon) {
    this.referrerCoupon = referrerCoupon;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AffiliateDockSetup affiliateDockSetup = (AffiliateDockSetup) o;
    return Objects.equals(affiliateDockTitle, affiliateDockSetup.affiliateDockTitle) &&
        Objects.equals(affiliateDockDescription, affiliateDockSetup.affiliateDockDescription) &&
        Objects.equals(referrerCoupon, affiliateDockSetup.referrerCoupon);
  }

  @Override
  public int hashCode() {
    return Objects.hash(affiliateDockTitle, affiliateDockDescription, referrerCoupon);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AffiliateDockSetup {\n");
    sb.append("    affiliateDockTitle: ").append(toIndentedString(affiliateDockTitle)).append("\n");
    sb.append("    affiliateDockDescription: ").append(toIndentedString(affiliateDockDescription)).append("\n");
    sb.append("    referrerCoupon: ").append(toIndentedString(referrerCoupon)).append("\n");
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
