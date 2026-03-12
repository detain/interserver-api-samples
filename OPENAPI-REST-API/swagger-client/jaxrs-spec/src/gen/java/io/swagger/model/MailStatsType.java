package io.swagger.model;

import io.swagger.model.MailStatsTypeVolume;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Statistics about the mail usage including volume by IP, To address, and From address; as well as total sent / delivered counts and cost.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Statistics about the mail usage including volume by IP, To address, and From address; as well as total sent / delivered counts and cost.")

public class MailStatsType   {

public enum TimeEnum {

    ALL(String.valueOf("all")), BILLING(String.valueOf("billing")), MONTH(String.valueOf("month")), _7D(String.valueOf("7d")), _24H(String.valueOf("24h")), TODAY(String.valueOf("today")), _1H(String.valueOf("1h"));


    private String value;

    TimeEnum (String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    @JsonValue
    public String toString() {
        return String.valueOf(value);
    }

    @JsonCreator
    public static TimeEnum fromValue(String v) {
        for (TimeEnum b : TimeEnum.values()) {
            if (String.valueOf(b.value).equals(v)) {
                return b;
            }
        }
        return null;
    }
}
  private @Valid TimeEnum time = TimeEnum._1H;

  private @Valid Integer usage = null;

  private @Valid String currency = null;

  private @Valid String currencySymbol = null;

  private @Valid Double cost = null;

  private @Valid Integer received = null;

  private @Valid Integer sent = null;

  private @Valid MailStatsTypeVolume volume = null;

  /**
   **/
  public MailStatsType time(TimeEnum time) {
    this.time = time;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("time")
  @NotNull

  public TimeEnum getTime() {
    return time;
  }
  public void setTime(TimeEnum time) {
    this.time = time;
  }

  /**
   **/
  public MailStatsType usage(Integer usage) {
    this.usage = usage;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("usage")
  @NotNull

  public Integer getUsage() {
    return usage;
  }
  public void setUsage(Integer usage) {
    this.usage = usage;
  }

  /**
   **/
  public MailStatsType currency(String currency) {
    this.currency = currency;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("currency")
  @NotNull

  public String getCurrency() {
    return currency;
  }
  public void setCurrency(String currency) {
    this.currency = currency;
  }

  /**
   **/
  public MailStatsType currencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("currencySymbol")
  @NotNull

  public String getCurrencySymbol() {
    return currencySymbol;
  }
  public void setCurrencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
  }

  /**
   **/
  public MailStatsType cost(Double cost) {
    this.cost = cost;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("cost")
  @NotNull

  public Double getCost() {
    return cost;
  }
  public void setCost(Double cost) {
    this.cost = cost;
  }

  /**
   **/
  public MailStatsType received(Integer received) {
    this.received = received;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("received")
  @NotNull

  public Integer getReceived() {
    return received;
  }
  public void setReceived(Integer received) {
    this.received = received;
  }

  /**
   **/
  public MailStatsType sent(Integer sent) {
    this.sent = sent;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("sent")
  @NotNull

  public Integer getSent() {
    return sent;
  }
  public void setSent(Integer sent) {
    this.sent = sent;
  }

  /**
   **/
  public MailStatsType volume(MailStatsTypeVolume volume) {
    this.volume = volume;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("volume")
  @NotNull

  public MailStatsTypeVolume getVolume() {
    return volume;
  }
  public void setVolume(MailStatsTypeVolume volume) {
    this.volume = volume;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailStatsType mailStatsType = (MailStatsType) o;
    return Objects.equals(time, mailStatsType.time) &&
        Objects.equals(usage, mailStatsType.usage) &&
        Objects.equals(currency, mailStatsType.currency) &&
        Objects.equals(currencySymbol, mailStatsType.currencySymbol) &&
        Objects.equals(cost, mailStatsType.cost) &&
        Objects.equals(received, mailStatsType.received) &&
        Objects.equals(sent, mailStatsType.sent) &&
        Objects.equals(volume, mailStatsType.volume);
  }

  @Override
  public int hashCode() {
    return Objects.hash(time, usage, currency, currencySymbol, cost, received, sent, volume);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailStatsType {\n");
    
    sb.append("    time: ").append(toIndentedString(time)).append("\n");
    sb.append("    usage: ").append(toIndentedString(usage)).append("\n");
    sb.append("    currency: ").append(toIndentedString(currency)).append("\n");
    sb.append("    currencySymbol: ").append(toIndentedString(currencySymbol)).append("\n");
    sb.append("    cost: ").append(toIndentedString(cost)).append("\n");
    sb.append("    received: ").append(toIndentedString(received)).append("\n");
    sb.append("    sent: ").append(toIndentedString(sent)).append("\n");
    sb.append("    volume: ").append(toIndentedString(volume)).append("\n");
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
