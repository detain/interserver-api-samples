package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class AccountInfoDataFraudrecord   {

  private @Valid String score = null;

  private @Valid String count = null;

  private @Valid String reliability = null;

  private @Valid String code = null;

  /**
   **/
  public AccountInfoDataFraudrecord score(String score) {
    this.score = score;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("score")
  @NotNull

  public String getScore() {
    return score;
  }
  public void setScore(String score) {
    this.score = score;
  }

  /**
   **/
  public AccountInfoDataFraudrecord count(String count) {
    this.count = count;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("count")
  @NotNull

  public String getCount() {
    return count;
  }
  public void setCount(String count) {
    this.count = count;
  }

  /**
   **/
  public AccountInfoDataFraudrecord reliability(String reliability) {
    this.reliability = reliability;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("reliability")
  @NotNull

  public String getReliability() {
    return reliability;
  }
  public void setReliability(String reliability) {
    this.reliability = reliability;
  }

  /**
   **/
  public AccountInfoDataFraudrecord code(String code) {
    this.code = code;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("code")
  @NotNull

  public String getCode() {
    return code;
  }
  public void setCode(String code) {
    this.code = code;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AccountInfoDataFraudrecord accountInfoDataFraudrecord = (AccountInfoDataFraudrecord) o;
    return Objects.equals(score, accountInfoDataFraudrecord.score) &&
        Objects.equals(count, accountInfoDataFraudrecord.count) &&
        Objects.equals(reliability, accountInfoDataFraudrecord.reliability) &&
        Objects.equals(code, accountInfoDataFraudrecord.code);
  }

  @Override
  public int hashCode() {
    return Objects.hash(score, count, reliability, code);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AccountInfoDataFraudrecord {\n");
    
    sb.append("    score: ").append(toIndentedString(score)).append("\n");
    sb.append("    count: ").append(toIndentedString(count)).append("\n");
    sb.append("    reliability: ").append(toIndentedString(reliability)).append("\n");
    sb.append("    code: ").append(toIndentedString(code)).append("\n");
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
