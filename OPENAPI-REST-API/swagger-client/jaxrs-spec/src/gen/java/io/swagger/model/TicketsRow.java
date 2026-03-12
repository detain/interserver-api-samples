package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Information about a single ticket.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Information about a single ticket.")

public class TicketsRow   {

  private @Valid String title = null;

  private @Valid String ticketmaskid = null;

  private @Valid String lastreplier = null;

  private @Valid String status = null;

  private @Valid String priority = null;

  private @Valid Integer totalReplies = null;

  private @Valid String lastactivity = null;

  private @Valid String departmenttitle = null;

  private @Valid Integer ticketid = null;

  private @Valid String canClose = null;

  private @Valid Object attachments = null;

  private @Valid String statusText = null;

  private @Valid Boolean checked = null;

  /**
   **/
  public TicketsRow title(String title) {
    this.title = title;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("title")
  @NotNull

  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  /**
   **/
  public TicketsRow ticketmaskid(String ticketmaskid) {
    this.ticketmaskid = ticketmaskid;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("ticketmaskid")
  @NotNull

  public String getTicketmaskid() {
    return ticketmaskid;
  }
  public void setTicketmaskid(String ticketmaskid) {
    this.ticketmaskid = ticketmaskid;
  }

  /**
   **/
  public TicketsRow lastreplier(String lastreplier) {
    this.lastreplier = lastreplier;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("lastreplier")
  @NotNull

  public String getLastreplier() {
    return lastreplier;
  }
  public void setLastreplier(String lastreplier) {
    this.lastreplier = lastreplier;
  }

  /**
   **/
  public TicketsRow status(String status) {
    this.status = status;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("status")
  @NotNull

  public String getStatus() {
    return status;
  }
  public void setStatus(String status) {
    this.status = status;
  }

  /**
   **/
  public TicketsRow priority(String priority) {
    this.priority = priority;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("priority")
  @NotNull

  public String getPriority() {
    return priority;
  }
  public void setPriority(String priority) {
    this.priority = priority;
  }

  /**
   **/
  public TicketsRow totalReplies(Integer totalReplies) {
    this.totalReplies = totalReplies;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("total_replies")
  @NotNull

  public Integer getTotalReplies() {
    return totalReplies;
  }
  public void setTotalReplies(Integer totalReplies) {
    this.totalReplies = totalReplies;
  }

  /**
   **/
  public TicketsRow lastactivity(String lastactivity) {
    this.lastactivity = lastactivity;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("lastactivity")
  @NotNull

  public String getLastactivity() {
    return lastactivity;
  }
  public void setLastactivity(String lastactivity) {
    this.lastactivity = lastactivity;
  }

  /**
   **/
  public TicketsRow departmenttitle(String departmenttitle) {
    this.departmenttitle = departmenttitle;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("departmenttitle")
  @NotNull

  public String getDepartmenttitle() {
    return departmenttitle;
  }
  public void setDepartmenttitle(String departmenttitle) {
    this.departmenttitle = departmenttitle;
  }

  /**
   **/
  public TicketsRow ticketid(Integer ticketid) {
    this.ticketid = ticketid;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("ticketid")
  @NotNull

  public Integer getTicketid() {
    return ticketid;
  }
  public void setTicketid(Integer ticketid) {
    this.ticketid = ticketid;
  }

  /**
   **/
  public TicketsRow canClose(String canClose) {
    this.canClose = canClose;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("can_close")
  @NotNull

  public String getCanClose() {
    return canClose;
  }
  public void setCanClose(String canClose) {
    this.canClose = canClose;
  }

  /**
   **/
  public TicketsRow attachments(Object attachments) {
    this.attachments = attachments;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("attachments")
  @NotNull

  public Object getAttachments() {
    return attachments;
  }
  public void setAttachments(Object attachments) {
    this.attachments = attachments;
  }

  /**
   **/
  public TicketsRow statusText(String statusText) {
    this.statusText = statusText;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("status_text")
  @NotNull

  public String getStatusText() {
    return statusText;
  }
  public void setStatusText(String statusText) {
    this.statusText = statusText;
  }

  /**
   **/
  public TicketsRow checked(Boolean checked) {
    this.checked = checked;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("checked")
  @NotNull

  public Boolean isChecked() {
    return checked;
  }
  public void setChecked(Boolean checked) {
    this.checked = checked;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TicketsRow ticketsRow = (TicketsRow) o;
    return Objects.equals(title, ticketsRow.title) &&
        Objects.equals(ticketmaskid, ticketsRow.ticketmaskid) &&
        Objects.equals(lastreplier, ticketsRow.lastreplier) &&
        Objects.equals(status, ticketsRow.status) &&
        Objects.equals(priority, ticketsRow.priority) &&
        Objects.equals(totalReplies, ticketsRow.totalReplies) &&
        Objects.equals(lastactivity, ticketsRow.lastactivity) &&
        Objects.equals(departmenttitle, ticketsRow.departmenttitle) &&
        Objects.equals(ticketid, ticketsRow.ticketid) &&
        Objects.equals(canClose, ticketsRow.canClose) &&
        Objects.equals(attachments, ticketsRow.attachments) &&
        Objects.equals(statusText, ticketsRow.statusText) &&
        Objects.equals(checked, ticketsRow.checked);
  }

  @Override
  public int hashCode() {
    return Objects.hash(title, ticketmaskid, lastreplier, status, priority, totalReplies, lastactivity, departmenttitle, ticketid, canClose, attachments, statusText, checked);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
