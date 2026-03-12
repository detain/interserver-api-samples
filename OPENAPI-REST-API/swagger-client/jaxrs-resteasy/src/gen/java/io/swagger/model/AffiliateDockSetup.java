package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Affiliate Landing Page information.")

public class AffiliateDockSetup   {
  private String affiliateDockTitle = null;  private String affiliateDockDescription = null;  private String referrerCoupon = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("affiliate_dock_title")
  @NotNull
  public String getAffiliateDockTitle() {
    return affiliateDockTitle;
  }
  public void setAffiliateDockTitle(String affiliateDockTitle) {
    this.affiliateDockTitle = affiliateDockTitle;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("affiliate_dock_description")
  @NotNull
  public String getAffiliateDockDescription() {
    return affiliateDockDescription;
  }
  public void setAffiliateDockDescription(String affiliateDockDescription) {
    this.affiliateDockDescription = affiliateDockDescription;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("referrer_coupon")
  @NotNull
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
