package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;


/**
 * Request payload for creating a new prepay balance.
 **/
@Schema(description = "Request payload for creating a new prepay balance.")


public class BillingPrepayRequest   {
  @JsonProperty("module")
  private String module = null;
  @JsonProperty("amount")
  private BigDecimal amount = null;
  @JsonProperty("automatic_use")
  private String automaticUse = null;
  /**
   * Module the prepay should be applied to (for example `default`).
   **/
  public BillingPrepayRequest module(String module) {
    this.module = module;
    return this;
  }

  
  @Schema(description = "Module the prepay should be applied to (for example `default`).")
  @JsonProperty("module")
  public String getModule() {
    return module;
  }
  public void setModule(String module) {
    this.module = module;
  }

  /**
   * Amount to add to prepay balance. Minimum is $10.
   **/
  public BillingPrepayRequest amount(BigDecimal amount) {
    this.amount = amount;
    return this;
  }

  
  @Schema(description = "Amount to add to prepay balance. Minimum is $10.")
  @JsonProperty("amount")
  public BigDecimal getAmount() {
    return amount;
  }
  public void setAmount(BigDecimal amount) {
    this.amount = amount;
  }

  /**
   * Whether the prepay balance should be used automatically.
   **/
  public BillingPrepayRequest automaticUse(String automaticUse) {
    this.automaticUse = automaticUse;
    return this;
  }

  
  @Schema(example = "1", description = "Whether the prepay balance should be used automatically.")
  @JsonProperty("automatic_use")
  public String getAutomaticUse() {
    return automaticUse;
  }
  public void setAutomaticUse(String automaticUse) {
    this.automaticUse = automaticUse;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BillingPrepayRequest billingPrepayRequest = (BillingPrepayRequest) o;
    return Objects.equals(module, billingPrepayRequest.module) &&
        Objects.equals(amount, billingPrepayRequest.amount) &&
        Objects.equals(automaticUse, billingPrepayRequest.automaticUse);
  }

  @Override
  public int hashCode() {
    return Objects.hash(module, amount, automaticUse);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BillingPrepayRequest {\n");
    sb.append("    module: ").append(toIndentedString(module)).append("\n");
    sb.append("    amount: ").append(toIndentedString(amount)).append("\n");
    sb.append("    automaticUse: ").append(toIndentedString(automaticUse)).append("\n");
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
