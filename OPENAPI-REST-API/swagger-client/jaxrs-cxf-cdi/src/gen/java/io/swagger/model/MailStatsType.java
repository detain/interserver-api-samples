package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.MailStatsTypeVolume;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * Statistics about the mail usage including volume by IP, To address, and From address; as well as total sent / delivered counts and cost.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Statistics about the mail usage including volume by IP, To address, and From address; as well as total sent / delivered counts and cost.")

public class MailStatsType   {
@XmlType(name="TimeEnum")
@XmlEnum(String.class)
public enum TimeEnum {

    @XmlEnumValue("all") ALL(String.valueOf("all")), @XmlEnumValue("billing") BILLING(String.valueOf("billing")), @XmlEnumValue("month") MONTH(String.valueOf("month")), @XmlEnumValue("7d") _7D(String.valueOf("7d")), @XmlEnumValue("24h") _24H(String.valueOf("24h")), @XmlEnumValue("today") TODAY(String.valueOf("today")), @XmlEnumValue("1h") _1H(String.valueOf("1h"));


    private String value;

    TimeEnum (String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    public String toString() {
        return String.valueOf(value);
    }

    public static TimeEnum fromValue(String v) {
        for (TimeEnum b : TimeEnum.values()) {
            if (String.valueOf(b.value).equals(v)) {
                return b;
            }
        }
        return null;
    }
}
  private TimeEnum time = TimeEnum._1H;
  private Integer usage = null;
  private String currency = null;
  private String currencySymbol = null;
  private Double cost = null;
  private Integer received = null;
  private Integer sent = null;
  private MailStatsTypeVolume volume = null;

  /**
   **/
  public MailStatsType time(TimeEnum time) {
    this.time = time;
    return this;
  }

  
  
  @Schema(description = "")
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

  
  
  @Schema(description = "")
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

  
  
  @Schema(description = "")
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

  
  
  @Schema(description = "")
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

  
  
  @Schema(description = "")
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

  
  
  @Schema(description = "")
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

  
  
  @Schema(description = "")
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

  
  
  @Schema(description = "")
  @JsonProperty("volume")
  @NotNull
  @Valid
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
