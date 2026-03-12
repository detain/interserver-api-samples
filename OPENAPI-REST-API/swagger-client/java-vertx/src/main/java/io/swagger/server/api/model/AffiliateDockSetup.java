package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Affiliate Landing Page information.
 */




public class AffiliateDockSetup   {
  private String affiliateDockTitle = null;

  private String affiliateDockDescription = null;

  private String referrerCoupon = null;

  public AffiliateDockSetup affiliateDockTitle(String affiliateDockTitle) {
    this.affiliateDockTitle = affiliateDockTitle;
    return this;
  }

  /**
   * Get affiliateDockTitle
   * @return affiliateDockTitle
   **/
    public String getAffiliateDockTitle() {
    return affiliateDockTitle;
  }

  public void setAffiliateDockTitle(String affiliateDockTitle) {
    this.affiliateDockTitle = affiliateDockTitle;
  }

  public AffiliateDockSetup affiliateDockDescription(String affiliateDockDescription) {
    this.affiliateDockDescription = affiliateDockDescription;
    return this;
  }

  /**
   * Get affiliateDockDescription
   * @return affiliateDockDescription
   **/
    public String getAffiliateDockDescription() {
    return affiliateDockDescription;
  }

  public void setAffiliateDockDescription(String affiliateDockDescription) {
    this.affiliateDockDescription = affiliateDockDescription;
  }

  public AffiliateDockSetup referrerCoupon(String referrerCoupon) {
    this.referrerCoupon = referrerCoupon;
    return this;
  }

  /**
   * Get referrerCoupon
   * @return referrerCoupon
   **/
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
    return Objects.equals(this.affiliateDockTitle, affiliateDockSetup.affiliateDockTitle) &&
        Objects.equals(this.affiliateDockDescription, affiliateDockSetup.affiliateDockDescription) &&
        Objects.equals(this.referrerCoupon, affiliateDockSetup.referrerCoupon);
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
