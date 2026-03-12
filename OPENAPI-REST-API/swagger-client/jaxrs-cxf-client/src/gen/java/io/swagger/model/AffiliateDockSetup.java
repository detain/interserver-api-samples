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
  * Affiliate Landing Page information.
 **/
@Schema(description="Affiliate Landing Page information.")
public class AffiliateDockSetup   {
  
  @Schema(description = "")
  private String affiliateDockTitle = null;
  
  @Schema(description = "")
  private String affiliateDockDescription = null;
  
  @Schema(description = "")
  private String referrerCoupon = null;
 /**
   * Get affiliateDockTitle
   * @return affiliateDockTitle
  **/
  @JsonProperty("affiliate_dock_title")
  public String getAffiliateDockTitle() {
    return affiliateDockTitle;
  }

  public void setAffiliateDockTitle(String affiliateDockTitle) {
    this.affiliateDockTitle = affiliateDockTitle;
  }

  public AffiliateDockSetup affiliateDockTitle(String affiliateDockTitle) {
    this.affiliateDockTitle = affiliateDockTitle;
    return this;
  }

 /**
   * Get affiliateDockDescription
   * @return affiliateDockDescription
  **/
  @JsonProperty("affiliate_dock_description")
  public String getAffiliateDockDescription() {
    return affiliateDockDescription;
  }

  public void setAffiliateDockDescription(String affiliateDockDescription) {
    this.affiliateDockDescription = affiliateDockDescription;
  }

  public AffiliateDockSetup affiliateDockDescription(String affiliateDockDescription) {
    this.affiliateDockDescription = affiliateDockDescription;
    return this;
  }

 /**
   * Get referrerCoupon
   * @return referrerCoupon
  **/
  @JsonProperty("referrer_coupon")
  public String getReferrerCoupon() {
    return referrerCoupon;
  }

  public void setReferrerCoupon(String referrerCoupon) {
    this.referrerCoupon = referrerCoupon;
  }

  public AffiliateDockSetup referrerCoupon(String referrerCoupon) {
    this.referrerCoupon = referrerCoupon;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
