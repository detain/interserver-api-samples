package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Payload for verifying a credit card through the verification flow.")

public class BillingVerifyCcRequest   {
  private Integer idx = null;
  private String ccCcv2 = null;
  private String ccAmount1 = null;
  private String ccAmount2 = null;
  private Boolean terms = null;

  /**
   * Card index to verify.
   **/
  
  @Schema(description = "Card index to verify.")
  @JsonProperty("idx")
  @NotNull
  public Integer getIdx() {
    return idx;
  }
  public void setIdx(Integer idx) {
    this.idx = idx;
  }

  /**
   * CVV code for verification.
   **/
  
  @Schema(description = "CVV code for verification.")
  @JsonProperty("cc_ccv2")
  @NotNull
  public String getCcCcv2() {
    return ccCcv2;
  }
  public void setCcCcv2(String ccCcv2) {
    this.ccCcv2 = ccCcv2;
  }

  /**
   * First micro-charge amount for verification.
   **/
  
  @Schema(description = "First micro-charge amount for verification.")
  @JsonProperty("cc_amount1")
  @NotNull
  public String getCcAmount1() {
    return ccAmount1;
  }
  public void setCcAmount1(String ccAmount1) {
    this.ccAmount1 = ccAmount1;
  }

  /**
   * Second micro-charge amount for verification.
   **/
  
  @Schema(description = "Second micro-charge amount for verification.")
  @JsonProperty("cc_amount2")
  @NotNull
  public String getCcAmount2() {
    return ccAmount2;
  }
  public void setCcAmount2(String ccAmount2) {
    this.ccAmount2 = ccAmount2;
  }

  /**
   * Whether terms were accepted for verification.
   **/
  
  @Schema(description = "Whether terms were accepted for verification.")
  @JsonProperty("terms")
  @NotNull
  public Boolean isTerms() {
    return terms;
  }
  public void setTerms(Boolean terms) {
    this.terms = terms;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BillingVerifyCcRequest billingVerifyCcRequest = (BillingVerifyCcRequest) o;
    return Objects.equals(idx, billingVerifyCcRequest.idx) &&
        Objects.equals(ccCcv2, billingVerifyCcRequest.ccCcv2) &&
        Objects.equals(ccAmount1, billingVerifyCcRequest.ccAmount1) &&
        Objects.equals(ccAmount2, billingVerifyCcRequest.ccAmount2) &&
        Objects.equals(terms, billingVerifyCcRequest.terms);
  }

  @Override
  public int hashCode() {
    return Objects.hash(idx, ccCcv2, ccAmount1, ccAmount2, terms);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BillingVerifyCcRequest {\n");
    
    sb.append("    idx: ").append(toIndentedString(idx)).append("\n");
    sb.append("    ccCcv2: ").append(toIndentedString(ccCcv2)).append("\n");
    sb.append("    ccAmount1: ").append(toIndentedString(ccAmount1)).append("\n");
    sb.append("    ccAmount2: ").append(toIndentedString(ccAmount2)).append("\n");
    sb.append("    terms: ").append(toIndentedString(terms)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
