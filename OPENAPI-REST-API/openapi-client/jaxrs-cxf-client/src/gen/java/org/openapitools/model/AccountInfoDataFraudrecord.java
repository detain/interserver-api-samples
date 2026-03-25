package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class AccountInfoDataFraudrecord  {
  
  @ApiModelProperty(value = "")

  private String score;

  @ApiModelProperty(value = "")

  private String count;

  @ApiModelProperty(value = "")

  private String reliability;

  @ApiModelProperty(value = "")

  private String code;
 /**
   * Get score
   * @return score
  **/
  @JsonProperty("score")
  public String getScore() {
    return score;
  }

  public void setScore(String score) {
    this.score = score;
  }

  public AccountInfoDataFraudrecord score(String score) {
    this.score = score;
    return this;
  }

 /**
   * Get count
   * @return count
  **/
  @JsonProperty("count")
  public String getCount() {
    return count;
  }

  public void setCount(String count) {
    this.count = count;
  }

  public AccountInfoDataFraudrecord count(String count) {
    this.count = count;
    return this;
  }

 /**
   * Get reliability
   * @return reliability
  **/
  @JsonProperty("reliability")
  public String getReliability() {
    return reliability;
  }

  public void setReliability(String reliability) {
    this.reliability = reliability;
  }

  public AccountInfoDataFraudrecord reliability(String reliability) {
    this.reliability = reliability;
    return this;
  }

 /**
   * Get code
   * @return code
  **/
  @JsonProperty("code")
  public String getCode() {
    return code;
  }

  public void setCode(String code) {
    this.code = code;
  }

  public AccountInfoDataFraudrecord code(String code) {
    this.code = code;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AccountInfoDataFraudrecord accountInfoDataFraudrecord = (AccountInfoDataFraudrecord) o;
    return Objects.equals(this.score, accountInfoDataFraudrecord.score) &&
        Objects.equals(this.count, accountInfoDataFraudrecord.count) &&
        Objects.equals(this.reliability, accountInfoDataFraudrecord.reliability) &&
        Objects.equals(this.code, accountInfoDataFraudrecord.code);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

