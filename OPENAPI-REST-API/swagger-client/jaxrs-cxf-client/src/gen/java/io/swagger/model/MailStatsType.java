package io.swagger.model;

import io.swagger.model.MailStatsTypeVolume;
import io.swagger.v3.oas.annotations.media.Schema;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * Statistics about the mail usage including volume by IP, To address, and From address; as well as total sent / delivered counts and cost.
 **/
@Schema(description="Statistics about the mail usage including volume by IP, To address, and From address; as well as total sent / delivered counts and cost.")
public class MailStatsType   {
  public enum TimeEnum {
    ALL("all"),
    BILLING("billing"),
    MONTH("month"),
    _7D("7d"),
    _24H("24h"),
    TODAY("today"),
    _1H("1h");

    private String value;

    TimeEnum(String value) {
      this.value = value;
    }
    @JsonValue
    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }
    @JsonCreator
    public static TimeEnum fromValue(String text) {
      for (TimeEnum b : TimeEnum.values()) {
        if (String.valueOf(b.value).equals(text)) {
          return b;
        }
      }
      return null;
    }
  }  
  @Schema(description = "")
  private TimeEnum time = TimeEnum._1H;
  
  @Schema(description = "")
  private Integer usage = null;
  
  @Schema(description = "")
  private String currency = null;
  
  @Schema(description = "")
  private String currencySymbol = null;
  
  @Schema(description = "")
  private Double cost = null;
  
  @Schema(description = "")
  private Integer received = null;
  
  @Schema(description = "")
  private Integer sent = null;
  
  @Schema(description = "")
  private MailStatsTypeVolume volume = null;
 /**
   * Get time
   * @return time
  **/
  @JsonProperty("time")
  public String getTime() {
    if (time == null) {
      return null;
    }
    return time.getValue();
  }

  public void setTime(TimeEnum time) {
    this.time = time;
  }

  public MailStatsType time(TimeEnum time) {
    this.time = time;
    return this;
  }

 /**
   * Get usage
   * @return usage
  **/
  @JsonProperty("usage")
  public Integer getUsage() {
    return usage;
  }

  public void setUsage(Integer usage) {
    this.usage = usage;
  }

  public MailStatsType usage(Integer usage) {
    this.usage = usage;
    return this;
  }

 /**
   * Get currency
   * @return currency
  **/
  @JsonProperty("currency")
  public String getCurrency() {
    return currency;
  }

  public void setCurrency(String currency) {
    this.currency = currency;
  }

  public MailStatsType currency(String currency) {
    this.currency = currency;
    return this;
  }

 /**
   * Get currencySymbol
   * @return currencySymbol
  **/
  @JsonProperty("currencySymbol")
  public String getCurrencySymbol() {
    return currencySymbol;
  }

  public void setCurrencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
  }

  public MailStatsType currencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
    return this;
  }

 /**
   * Get cost
   * @return cost
  **/
  @JsonProperty("cost")
  public Double getCost() {
    return cost;
  }

  public void setCost(Double cost) {
    this.cost = cost;
  }

  public MailStatsType cost(Double cost) {
    this.cost = cost;
    return this;
  }

 /**
   * Get received
   * @return received
  **/
  @JsonProperty("received")
  public Integer getReceived() {
    return received;
  }

  public void setReceived(Integer received) {
    this.received = received;
  }

  public MailStatsType received(Integer received) {
    this.received = received;
    return this;
  }

 /**
   * Get sent
   * @return sent
  **/
  @JsonProperty("sent")
  public Integer getSent() {
    return sent;
  }

  public void setSent(Integer sent) {
    this.sent = sent;
  }

  public MailStatsType sent(Integer sent) {
    this.sent = sent;
    return this;
  }

 /**
   * Get volume
   * @return volume
  **/
  @JsonProperty("volume")
  public MailStatsTypeVolume getVolume() {
    return volume;
  }

  public void setVolume(MailStatsTypeVolume volume) {
    this.volume = volume;
  }

  public MailStatsType volume(MailStatsTypeVolume volume) {
    this.volume = volume;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
