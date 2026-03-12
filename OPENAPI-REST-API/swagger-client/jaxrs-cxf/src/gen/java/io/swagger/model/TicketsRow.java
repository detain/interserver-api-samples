package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

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
  * Information about a single ticket.
 **/
@Schema(description="Information about a single ticket.")
public class TicketsRow   {
  
  @Schema(required = true, description = "")
  private String title = null;
  
  @Schema(required = true, description = "")
  private String ticketmaskid = null;
  
  @Schema(required = true, description = "")
  private String lastreplier = null;
  
  @Schema(required = true, description = "")
  private String status = null;
  
  @Schema(required = true, description = "")
  private String priority = null;
  
  @Schema(required = true, description = "")
  private Integer totalReplies = null;
  
  @Schema(required = true, description = "")
  private String lastactivity = null;
  
  @Schema(required = true, description = "")
  private String departmenttitle = null;
  
  @Schema(required = true, description = "")
  private Integer ticketid = null;
  
  @Schema(required = true, description = "")
  private String canClose = null;
  
  @Schema(required = true, description = "")
  private Object attachments = null;
  
  @Schema(required = true, description = "")
  private String statusText = null;
  
  @Schema(required = true, description = "")
  private Boolean checked = null;
 /**
   * Get title
   * @return title
  **/
  @JsonProperty("title")
  @NotNull
  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public TicketsRow title(String title) {
    this.title = title;
    return this;
  }

 /**
   * Get ticketmaskid
   * @return ticketmaskid
  **/
  @JsonProperty("ticketmaskid")
  @NotNull
  public String getTicketmaskid() {
    return ticketmaskid;
  }

  public void setTicketmaskid(String ticketmaskid) {
    this.ticketmaskid = ticketmaskid;
  }

  public TicketsRow ticketmaskid(String ticketmaskid) {
    this.ticketmaskid = ticketmaskid;
    return this;
  }

 /**
   * Get lastreplier
   * @return lastreplier
  **/
  @JsonProperty("lastreplier")
  @NotNull
  public String getLastreplier() {
    return lastreplier;
  }

  public void setLastreplier(String lastreplier) {
    this.lastreplier = lastreplier;
  }

  public TicketsRow lastreplier(String lastreplier) {
    this.lastreplier = lastreplier;
    return this;
  }

 /**
   * Get status
   * @return status
  **/
  @JsonProperty("status")
  @NotNull
  public String getStatus() {
    return status;
  }

  public void setStatus(String status) {
    this.status = status;
  }

  public TicketsRow status(String status) {
    this.status = status;
    return this;
  }

 /**
   * Get priority
   * @return priority
  **/
  @JsonProperty("priority")
  @NotNull
  public String getPriority() {
    return priority;
  }

  public void setPriority(String priority) {
    this.priority = priority;
  }

  public TicketsRow priority(String priority) {
    this.priority = priority;
    return this;
  }

 /**
   * Get totalReplies
   * @return totalReplies
  **/
  @JsonProperty("total_replies")
  @NotNull
  public Integer getTotalReplies() {
    return totalReplies;
  }

  public void setTotalReplies(Integer totalReplies) {
    this.totalReplies = totalReplies;
  }

  public TicketsRow totalReplies(Integer totalReplies) {
    this.totalReplies = totalReplies;
    return this;
  }

 /**
   * Get lastactivity
   * @return lastactivity
  **/
  @JsonProperty("lastactivity")
  @NotNull
  public String getLastactivity() {
    return lastactivity;
  }

  public void setLastactivity(String lastactivity) {
    this.lastactivity = lastactivity;
  }

  public TicketsRow lastactivity(String lastactivity) {
    this.lastactivity = lastactivity;
    return this;
  }

 /**
   * Get departmenttitle
   * @return departmenttitle
  **/
  @JsonProperty("departmenttitle")
  @NotNull
  public String getDepartmenttitle() {
    return departmenttitle;
  }

  public void setDepartmenttitle(String departmenttitle) {
    this.departmenttitle = departmenttitle;
  }

  public TicketsRow departmenttitle(String departmenttitle) {
    this.departmenttitle = departmenttitle;
    return this;
  }

 /**
   * Get ticketid
   * @return ticketid
  **/
  @JsonProperty("ticketid")
  @NotNull
  public Integer getTicketid() {
    return ticketid;
  }

  public void setTicketid(Integer ticketid) {
    this.ticketid = ticketid;
  }

  public TicketsRow ticketid(Integer ticketid) {
    this.ticketid = ticketid;
    return this;
  }

 /**
   * Get canClose
   * @return canClose
  **/
  @JsonProperty("can_close")
  @NotNull
  public String getCanClose() {
    return canClose;
  }

  public void setCanClose(String canClose) {
    this.canClose = canClose;
  }

  public TicketsRow canClose(String canClose) {
    this.canClose = canClose;
    return this;
  }

 /**
   * Get attachments
   * @return attachments
  **/
  @JsonProperty("attachments")
  @NotNull
  public Object getAttachments() {
    return attachments;
  }

  public void setAttachments(Object attachments) {
    this.attachments = attachments;
  }

  public TicketsRow attachments(Object attachments) {
    this.attachments = attachments;
    return this;
  }

 /**
   * Get statusText
   * @return statusText
  **/
  @JsonProperty("status_text")
  @NotNull
  public String getStatusText() {
    return statusText;
  }

  public void setStatusText(String statusText) {
    this.statusText = statusText;
  }

  public TicketsRow statusText(String statusText) {
    this.statusText = statusText;
    return this;
  }

 /**
   * Get checked
   * @return checked
  **/
  @JsonProperty("checked")
  @NotNull
  public Boolean isChecked() {
    return checked;
  }

  public void setChecked(Boolean checked) {
    this.checked = checked;
  }

  public TicketsRow checked(Boolean checked) {
    this.checked = checked;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TicketsRow {\n");
    
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    ticketmaskid: ").append(toIndentedString(ticketmaskid)).append("\n");
    sb.append("    lastreplier: ").append(toIndentedString(lastreplier)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    priority: ").append(toIndentedString(priority)).append("\n");
    sb.append("    totalReplies: ").append(toIndentedString(totalReplies)).append("\n");
    sb.append("    lastactivity: ").append(toIndentedString(lastactivity)).append("\n");
    sb.append("    departmenttitle: ").append(toIndentedString(departmenttitle)).append("\n");
    sb.append("    ticketid: ").append(toIndentedString(ticketid)).append("\n");
    sb.append("    canClose: ").append(toIndentedString(canClose)).append("\n");
    sb.append("    attachments: ").append(toIndentedString(attachments)).append("\n");
    sb.append("    statusText: ").append(toIndentedString(statusText)).append("\n");
    sb.append("    checked: ").append(toIndentedString(checked)).append("\n");
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
