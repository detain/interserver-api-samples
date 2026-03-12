package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.MonthlyCounts;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Monthly mail delivery status breakdown, showing counts per status category.")

public class StatusMonthlyBreakdown   {
  private MonthlyCounts _default = null;
  private MonthlyCounts failed = null;
  private MonthlyCounts rejected = null;
  private MonthlyCounts pending = null;
  private MonthlyCounts locked = null;
  private MonthlyCounts paid = null;

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("default")
  @NotNull
  public MonthlyCounts getDefault() {
    return _default;
  }
  public void setDefault(MonthlyCounts _default) {
    this._default = _default;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("failed")
  @NotNull
  public MonthlyCounts getFailed() {
    return failed;
  }
  public void setFailed(MonthlyCounts failed) {
    this.failed = failed;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("rejected")
  @NotNull
  public MonthlyCounts getRejected() {
    return rejected;
  }
  public void setRejected(MonthlyCounts rejected) {
    this.rejected = rejected;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("pending")
  @NotNull
  public MonthlyCounts getPending() {
    return pending;
  }
  public void setPending(MonthlyCounts pending) {
    this.pending = pending;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("locked")
  @NotNull
  public MonthlyCounts getLocked() {
    return locked;
  }
  public void setLocked(MonthlyCounts locked) {
    this.locked = locked;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("paid")
  @NotNull
  public MonthlyCounts getPaid() {
    return paid;
  }
  public void setPaid(MonthlyCounts paid) {
    this.paid = paid;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    StatusMonthlyBreakdown statusMonthlyBreakdown = (StatusMonthlyBreakdown) o;
    return Objects.equals(_default, statusMonthlyBreakdown._default) &&
        Objects.equals(failed, statusMonthlyBreakdown.failed) &&
        Objects.equals(rejected, statusMonthlyBreakdown.rejected) &&
        Objects.equals(pending, statusMonthlyBreakdown.pending) &&
        Objects.equals(locked, statusMonthlyBreakdown.locked) &&
        Objects.equals(paid, statusMonthlyBreakdown.paid);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_default, failed, rejected, pending, locked, paid);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class StatusMonthlyBreakdown {\n");
    
    sb.append("    _default: ").append(toIndentedString(_default)).append("\n");
    sb.append("    failed: ").append(toIndentedString(failed)).append("\n");
    sb.append("    rejected: ").append(toIndentedString(rejected)).append("\n");
    sb.append("    pending: ").append(toIndentedString(pending)).append("\n");
    sb.append("    locked: ").append(toIndentedString(locked)).append("\n");
    sb.append("    paid: ").append(toIndentedString(paid)).append("\n");
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
