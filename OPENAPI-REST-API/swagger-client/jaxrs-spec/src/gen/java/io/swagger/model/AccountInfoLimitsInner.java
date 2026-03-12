package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class AccountInfoLimitsInner   {

  private @Valid String start = null;

  private @Valid String end = null;

  /**
   **/
  public AccountInfoLimitsInner start(String start) {
    this.start = start;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("start")
  @NotNull

  public String getStart() {
    return start;
  }
  public void setStart(String start) {
    this.start = start;
  }

  /**
   **/
  public AccountInfoLimitsInner end(String end) {
    this.end = end;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("end")
  @NotNull

  public String getEnd() {
    return end;
  }
  public void setEnd(String end) {
    this.end = end;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AccountInfoLimitsInner accountInfoLimitsInner = (AccountInfoLimitsInner) o;
    return Objects.equals(start, accountInfoLimitsInner.start) &&
        Objects.equals(end, accountInfoLimitsInner.end);
  }

  @Override
  public int hashCode() {
    return Objects.hash(start, end);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AccountInfoLimitsInner {\n");
    
    sb.append("    start: ").append(toIndentedString(start)).append("\n");
    sb.append("    end: ").append(toIndentedString(end)).append("\n");
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
