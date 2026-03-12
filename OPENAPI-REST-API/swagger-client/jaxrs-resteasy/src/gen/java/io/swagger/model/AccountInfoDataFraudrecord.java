package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class AccountInfoDataFraudrecord   {
  private String score = null;  private String count = null;  private String reliability = null;  private String code = null;

  /**
   **/
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
