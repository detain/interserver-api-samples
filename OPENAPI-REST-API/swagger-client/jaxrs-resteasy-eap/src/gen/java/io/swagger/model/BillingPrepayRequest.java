package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Request payload for creating a new prepay balance.")

public class BillingPrepayRequest   {
  private String module = null;
  private BigDecimal amount = null;
  private String automaticUse = null;

  /**
   * Module the prepay should be applied to (for example &#x60;default&#x60;).
   **/
  
  @Schema(description = "Module the prepay should be applied to (for example `default`).")
  @JsonProperty("module")
  @NotNull
  public String getModule() {
    return module;
  }
  public void setModule(String module) {
    this.module = module;
  }

  /**
   * Amount to add to prepay balance. Minimum is $10.
   **/
  
  @Schema(description = "Amount to add to prepay balance. Minimum is $10.")
  @JsonProperty("amount")
  @NotNull
  public BigDecimal getAmount() {
    return amount;
  }
  public void setAmount(BigDecimal amount) {
    this.amount = amount;
  }

  /**
   * Whether the prepay balance should be used automatically.
   **/
  
  @Schema(example = "1", description = "Whether the prepay balance should be used automatically.")
  @JsonProperty("automatic_use")
  @NotNull
  public String getAutomaticUse() {
    return automaticUse;
  }
  public void setAutomaticUse(String automaticUse) {
    this.automaticUse = automaticUse;
  }


  @Override
  public boolean equals(Object o) {
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
