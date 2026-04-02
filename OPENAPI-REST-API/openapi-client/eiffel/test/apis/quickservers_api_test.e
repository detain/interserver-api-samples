note
    description: "API tests for QUICKSERVERS_API"
    date: "$Date$"
    revision: "$Revision$"


class QUICKSERVERS_API_TEST

inherit

    EQA_TEST_SET

feature -- Test routines


    test_add_qs
            -- Place QuickServer Order
            --
            -- Places a QuickServer order. On success, invoices are generated for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.
        local
            l_response: SERVICE_ORDER_POST_RESPONSE
        do
            -- TODO: Initialize required params.

            -- l_response := api.add_qs
            assert ("not_implemented", False)
        end

    test_delete_qs_backup
            -- Delete QuickServer Backup
            --
            -- Permanently removes the specified backup file from storage. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames before deleting.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: INTEGER_32
            l_file: STRING_32
            l_var_all: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_file

            -- l_response := api.delete_qs_backup(l_id, l_file, l_var_all)
            assert ("not_implemented", False)
        end

    test_do_qs_block_smtp
            -- Block QuickServer SMTP
            --
            -- Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.do_qs_block_smtp(l_id)
            assert ("not_implemented", False)
        end

    test_do_qs_disable_cd
            -- Disable CD Drive
            --
            -- Disables the virtual CD drive for the QuickServer.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.do_qs_disable_cd(l_id)
            assert ("not_implemented", False)
        end

    test_do_qs_disable_quota
            -- Disable Quotas
            --
            -- Disables disk quota enforcement for the QuickServer.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.do_qs_disable_quota(l_id)
            assert ("not_implemented", False)
        end

    test_do_qs_eject_cd
            -- Eject CD Drive
            --
            -- Ejects the virtual CD from the QuickServer&#39;s CD drive.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.do_qs_eject_cd(l_id)
            assert ("not_implemented", False)
        end

    test_do_qs_enable_quota
            -- Enable Quotas
            --
            -- Enables disk quota enforcement for the QuickServer.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.do_qs_enable_quota(l_id)
            assert ("not_implemented", False)
        end

    test_do_qs_restart
            -- Restart QuickServer
            --
            -- Restarts the QuickServer. The server will be shut down and started again.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.do_qs_restart(l_id)
            assert ("not_implemented", False)
        end

    test_do_qs_start
            -- Start QuickServer
            --
            -- Powers on the QuickServer.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.do_qs_start(l_id)
            assert ("not_implemented", False)
        end

    test_do_qs_stop
            -- Stop QuickServer
            --
            -- Powers off the QuickServer.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.do_qs_stop(l_id)
            assert ("not_implemented", False)
        end

    test_download_qs_backup
            -- Download QuickServer Backup
            --
            -- Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames.
        local
            l_response: DOWNLOAD_QS_BACKUP_200_RESPONSE
            l_id: INTEGER_32
            l_download_qs_backup_request: DOWNLOAD_QS_BACKUP_REQUEST
            l_var_all: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_download_qs_backup_request

            -- l_response := api.download_qs_backup(l_id, l_download_qs_backup_request, l_var_all)
            assert ("not_implemented", False)
        end

    test_new_qs
            -- Get QuickServer Ordering Information
            --
            -- Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
        local
            l_response: QUICKSERVER_ORDER
        do
            -- TODO: Initialize required params.

            -- l_response := api.new_qs
            assert ("not_implemented", False)
        end

    test_post_qs_backup
            -- Create QuickServer Backup
            --
            -- Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.post_qs_backup(l_id)
            assert ("not_implemented", False)
        end

    test_post_qs_change_hostname
            -- Update QuickServer Hostname
            --
            -- Submits a hostname change request for the QuickServer.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.post_qs_change_hostname(l_id)
            assert ("not_implemented", False)
        end

    test_post_qs_change_root_password
            -- Change Root Password
            --
            -- Triggers a root password reset for the QuickServer.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.post_qs_change_root_password(l_id)
            assert ("not_implemented", False)
        end

    test_post_qs_change_timezone
            -- Change QuickServer Timezone
            --
            -- Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
            l_timezone: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_timezone

            -- l_response := api.post_qs_change_timezone(l_id, l_timezone)
            assert ("not_implemented", False)
        end

    test_post_qs_change_webuzo_password
            -- Change Webuzo Password
            --
            -- Resets the Webuzo control panel password for the QuickServer.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.post_qs_change_webuzo_password(l_id)
            assert ("not_implemented", False)
        end

    test_post_qs_insert_cd
            -- Insert CD in QuickServer
            --
            -- Mounts an ISO image in the QuickServer&#39;s virtual CD drive. Use &#x60;GET /qs/{id}/insert_cd&#x60; to list available images.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.post_qs_insert_cd(l_id)
            assert ("not_implemented", False)
        end

    test_post_qs_reinstall_os
            -- Reinstall QuickServer OS
            --
            -- Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.post_qs_reinstall_os(l_id)
            assert ("not_implemented", False)
        end

    test_post_qs_reset_password
            -- Reset QuickServer Password
            --
            -- Resets the root password on the QuickServer to a new randomly generated password.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.post_qs_reset_password(l_id)
            assert ("not_implemented", False)
        end

    test_post_qs_reverse_dns
            -- Update Reverse DNS
            --
            -- Updates the reverse DNS (PTR record) entries for the QuickServer&#39;s IP addresses.
        local
            l_response: TEXT_RESPONSE
            l_id: INTEGER_32
            l_reverse_dns_entries: REVERSE_DNS_ENTRIES
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_reverse_dns_entries

            -- l_response := api.post_qs_reverse_dns(l_id, l_reverse_dns_entries)
            assert ("not_implemented", False)
        end

    test_post_qs_setup_vnc
            -- Setup VNC
            --
            -- Sets up or refreshes the VNC console connection for the QuickServer.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.post_qs_setup_vnc(l_id)
            assert ("not_implemented", False)
        end

    test_post_qs_traffic_usage
            -- Search Traffic Usage
            --
            -- Searches and filters the QuickServer&#39;s bandwidth traffic usage data by date range.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.post_qs_traffic_usage(l_id)
            assert ("not_implemented", False)
        end

    test_post_qs_view_desktop
            -- Update View Desktop
            --
            -- Updates or refreshes the remote desktop session for the QuickServer.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.post_qs_view_desktop(l_id)
            assert ("not_implemented", False)
        end

    test_post_quick_server_restore
            -- Restore QuickServer from Backup
            --
            -- Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
            l_restore_request: RESTORE_REQUEST
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_restore_request

            -- l_response := api.post_quick_server_restore(l_id, l_restore_request)
            assert ("not_implemented", False)
        end

    test_put_qs
            -- Validate QuickServer Order
            --
            -- Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
        local
        do
            -- TODO: Initialize required params.

            -- api.put_qs
            assert ("not_implemented", False)
        end

    test_qs_backups
            -- List QuickServer Backups
            --
            -- Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /qs/{id}/backups&#x60; to download or &#x60;DELETE /qs/{id}/backups&#x60; to remove a backup. Use &#x60;POST /qs/{id}/restore&#x60; to restore from a backup.
        local
            l_response: VPS_BACKUP_ROWS
            l_id: INTEGER_32
            l_var_all: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.qs_backups(l_id, l_var_all)
            assert ("not_implemented", False)
        end

    test_qs_change_hostname
            -- Get QuickServer Hostname
            --
            -- Retrieves the current hostname and any validation requirements for changing it.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.qs_change_hostname(l_id)
            assert ("not_implemented", False)
        end

    test_qs_change_root_password
            -- Get Change Root Password Info
            --
            -- Retrieves instructions or metadata needed to reset the root password.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.qs_change_root_password(l_id)
            assert ("not_implemented", False)
        end

    test_qs_change_timezone
            -- Get Timezone Info
            --
            -- Returns the list of available timezones that can be set on the QuickServer.
        local
            l_response: LIST [STRING_32]
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.qs_change_timezone(l_id)
            assert ("not_implemented", False)
        end

    test_qs_change_webuzo_password
            -- Webuzo Change Pass Info
            --
            -- Retrieves instructions or metadata for changing the Webuzo control panel password.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.qs_change_webuzo_password(l_id)
            assert ("not_implemented", False)
        end

    test_qs_info
            -- Get QuickServer Order
            --
            -- Returns detailed QuickServer information, including credentials, IPs, and available client actions.
        local
            l_response: QUICKSERVER
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.qs_info(l_id)
            assert ("not_implemented", False)
        end

    test_qs_insert_cd
            -- Insert CD Information
            --
            -- Returns available ISO images that can be mounted in the QuickServer&#39;s virtual CD drive.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.qs_insert_cd(l_id)
            assert ("not_implemented", False)
        end

    test_qs_invoices
            -- Get QuickServer Invoices
            --
            -- Returns the billing invoices associated with this QuickServer.
        local
            l_response: CHARGE_INVOICE_ROWS
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.qs_invoices(l_id)
            assert ("not_implemented", False)
        end

    test_qs_list
            -- List QuickServers
            --
            -- Returns the QuickServer services on your account. Use the &#x60;qs_id&#x60; values with &#x60;/qs/{id}&#x60; for details or with the action endpoints (restart, backup, etc.) to manage each server.
        local
            l_response: LIST [QUICKSERVER_ROW]
        do
            -- TODO: Initialize required params.

            -- l_response := api.qs_list
            assert ("not_implemented", False)
        end

    test_qs_reinstall_os
            -- QuickServer Reinstall OS Options
            --
            -- Returns the list of available operating system templates for reinstalling the QuickServer.
        local
            l_response: VPS_TEMPLATES_LIST
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.qs_reinstall_os(l_id)
            assert ("not_implemented", False)
        end

    test_qs_reset_password
            -- Reset QuickServer Password Info
            --
            -- Returns information needed before resetting the QuickServer&#39;s root password.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.qs_reset_password(l_id)
            assert ("not_implemented", False)
        end

    test_qs_reverse_dns
            -- Reverse DNS Info
            --
            -- Returns the current reverse DNS (PTR record) entries for the QuickServer&#39;s IP addresses.
        local
            l_response: REVERSE_DNS_ENTRIES
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.qs_reverse_dns(l_id)
            assert ("not_implemented", False)
        end

    test_qs_setup_vnc
            -- VNC Setup Info
            --
            -- Returns the current VNC connection information for the QuickServer.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.qs_setup_vnc(l_id)
            assert ("not_implemented", False)
        end

    test_qs_traffic_usage
            -- Get Traffic Usage
            --
            -- Returns bandwidth traffic usage data for the QuickServer.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.qs_traffic_usage(l_id)
            assert ("not_implemented", False)
        end

    test_qs_view_desktop
            -- Get View Desktop Info
            --
            -- Returns remote desktop connection information for the QuickServer.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.qs_view_desktop(l_id)
            assert ("not_implemented", False)
        end

    test_qs_welcome_email
            -- Resend QuickServer Welcome Email
            --
            -- Resends the welcome email containing connection details and credentials for the QuickServer order.
        local
            l_response: TEXT_RESPONSE
            l_id: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.qs_welcome_email(l_id)
            assert ("not_implemented", False)
        end

    test_quickservers_cancel
            -- Cancel QuickServer Order
            --
            -- Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
        local
            l_response: QUICKSERVERS_CANCEL_200_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.quickservers_cancel(l_id)
            assert ("not_implemented", False)
        end

    test_update_qs_info
            -- Update QuickServer Order
            --
            -- Updates QuickServer metadata or stored settings associated with the order.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.update_qs_info(l_id)
            assert ("not_implemented", False)
        end

feature {NONE} -- Implementation

    api: QUICKSERVERS_API
            -- Create an object instance of `QUICKSERVERS_API'.
        once
            create { QUICKSERVERS_API } Result
        end

end
