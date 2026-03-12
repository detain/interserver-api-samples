package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Payload for verifying a credit card through the verification flow.
 **/
@Schema(description = "Payload for verifying a credit card through the verification flow.")


public class BillingVerifyCcRequest   {
  @JsonProperty("idx")
  private Integer idx = null;
  @JsonProperty("cc_ccv2")
  private String ccCcv2 = null;
  @JsonProperty("cc_amount1")
  private String ccAmount1 = null;
  @JsonProperty("cc_amount2")
  private String ccAmount2 = null;
  @JsonProperty("terms")
  private Boolean terms = null;
  /**
   * Card index to verify.
   **/
  public BillingVerifyCcRequest idx(Integer idx) {
    this.idx = idx;
    return this;
  }

  
  @Schema(description = "Card index to verify.")
  @JsonProperty("idx")
  public Integer getIdx() {
    return idx;
  }
  public void setIdx(Integer idx) {
    this.idx = idx;
  }

  /**
   * CVV code for verification.
   **/
  public BillingVerifyCcRequest ccCcv2(String ccCcv2) {
    this.ccCcv2 = ccCcv2;
    return this;
  }

  
  @Schema(description = "CVV code for verification.")
  @JsonProperty("cc_ccv2")
  public String getCcCcv2() {
    return ccCcv2;
  }
  public void setCcCcv2(String ccCcv2) {
    this.ccCcv2 = ccCcv2;
  }

  /**
   * First micro-charge amount for verification.
   **/
  public BillingVerifyCcRequest ccAmount1(String ccAmount1) {
    this.ccAmount1 = ccAmount1;
    return this;
  }

  
  @Schema(description = "First micro-charge amount for verification.")
  @JsonProperty("cc_amount1")
  public String getCcAmount1() {
    return ccAmount1;
  }
  public void setCcAmount1(String ccAmount1) {
    this.ccAmount1 = ccAmount1;
  }

  /**
   * Second micro-charge amount for verification.
   **/
  public BillingVerifyCcRequest ccAmount2(String ccAmount2) {
    this.ccAmount2 = ccAmount2;
    return this;
  }

  
  @Schema(description = "Second micro-charge amount for verification.")
  @JsonProperty("cc_amount2")
  public String getCcAmount2() {
    return ccAmount2;
  }
  public void setCcAmount2(String ccAmount2) {
    this.ccAmount2 = ccAmount2;
  }

  /**
   * Whether terms were accepted for verification.
   **/
  public BillingVerifyCcRequest terms(Boolean terms) {
    this.terms = terms;
    return this;
  }

  
  @Schema(description = "Whether terms were accepted for verification.")
  @JsonProperty("terms")
  public Boolean isTerms() {
    return terms;
  }
  public void setTerms(Boolean terms) {
    this.terms = terms;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
