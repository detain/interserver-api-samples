note
    description: "API tests for VPS_API"
    date: "$Date$"
    revision: "$Revision$"


class VPS_API_TEST

inherit

    EQA_TEST_SET

feature -- Test routines


    test_add_vps
            -- Place VPS Order
            --
            -- Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.
        local
            l_response: SERVICE_ORDER_POST_RESPONSE
            l_vps_order_post_request: VPS_ORDER_POST_REQUEST
        do
            -- TODO: Initialize required params.

            -- l_response := api.add_vps(l_vps_order_post_request)
            assert ("not_implemented", False)
        end

    test_delete_vps_backup
            -- Delete VPS Backup
            --
            -- Permanently removes the specified backup file from storage. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames before deleting.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: INTEGER_32
            l_file: STRING_32
            l_var_all: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_file

            -- l_response := api.delete_vps_backup(l_id, l_file, l_var_all)
            assert ("not_implemented", False)
        end

    test_do_vps_block_smtp
            -- Blocks SMTP
            --
            -- Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.do_vps_block_smtp(l_id)
            assert ("not_implemented", False)
        end

    test_do_vps_disable_cd
            -- Disable CD Drive
            --
            -- Disables the virtual CD drive on the VPS.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.do_vps_disable_cd(l_id)
            assert ("not_implemented", False)
        end

    test_do_vps_disable_quota
            -- Disable Quotas
            --
            -- Disables disk quota enforcement on the VPS.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.do_vps_disable_quota(l_id)
            assert ("not_implemented", False)
        end

    test_do_vps_eject_cd
            -- Eject CD Drive
            --
            -- Ejects the virtual CD from the VPS CD drive.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.do_vps_eject_cd(l_id)
            assert ("not_implemented", False)
        end

    test_do_vps_enable_quota
            -- Enable Quotas
            --
            -- Enables disk quota enforcement on the VPS.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.do_vps_enable_quota(l_id)
            assert ("not_implemented", False)
        end

    test_do_vps_restart
            -- Restart VPS
            --
            -- Restarts the VPS.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.do_vps_restart(l_id)
            assert ("not_implemented", False)
        end

    test_do_vps_start
            -- Start VPS
            --
            -- Powers on the VPS.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.do_vps_start(l_id)
            assert ("not_implemented", False)
        end

    test_do_vps_stop
            -- Stop VPS
            --
            -- Powers off the VPS.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.do_vps_stop(l_id)
            assert ("not_implemented", False)
        end

    test_download_vps_backup
            -- Download VPS Backup
            --
            -- Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.
        local
            l_response: DOWNLOAD_QS_BACKUP_200_RESPONSE
            l_id: INTEGER_32
            l_download_qs_backup_request: DOWNLOAD_QS_BACKUP_REQUEST
            l_var_all: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_download_qs_backup_request

            -- l_response := api.download_vps_backup(l_id, l_download_qs_backup_request, l_var_all)
            assert ("not_implemented", False)
        end

    test_new_vps
            -- VPS Ordering Information
            --
            -- Retrieves available VPS configurations, OS templates, and pricing for ordering.
        local
            l_response: VPS_ORDER
        do
            -- TODO: Initialize required params.

            -- l_response := api.new_vps
            assert ("not_implemented", False)
        end

    test_post_vps_backup
            -- Start a VPS Backup
            --
            -- Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.post_vps_backup(l_id)
            assert ("not_implemented", False)
        end

    test_post_vps_buy_hd_space
            -- Purchase HD Space Addon
            --
            -- Purchases additional hard drive space for the VPS.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.post_vps_buy_hd_space(l_id)
            assert ("not_implemented", False)
        end

    test_post_vps_buy_ip
            -- Purchase Additional IP
            --
            -- Purchases an additional IP address for the VPS.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.post_vps_buy_ip(l_id)
            assert ("not_implemented", False)
        end

    test_post_vps_change_hostname
            -- Update VPS Hostname
            --
            -- Changes the hostname of the VPS. This queues a background task to update the server.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
            l_hostname: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.post_vps_change_hostname(l_id, l_hostname)
            assert ("not_implemented", False)
        end

    test_post_vps_change_root_password
            -- Change VPS Root Password
            --
            -- Changes the root password of the VPS.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
            l_password: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_password

            -- l_response := api.post_vps_change_root_password(l_id, l_password)
            assert ("not_implemented", False)
        end

    test_post_vps_change_timezone
            -- Change VPS Timezone
            --
            -- Changes the system timezone on the VPS.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
            l_timezone: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_timezone

            -- l_response := api.post_vps_change_timezone(l_id, l_timezone)
            assert ("not_implemented", False)
        end

    test_post_vps_change_webuzo_password
            -- Change Webuzo Password
            --
            -- Changes the Webuzo control panel password on the VPS.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
            l_password: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_password

            -- l_response := api.post_vps_change_webuzo_password(l_id, l_password)
            assert ("not_implemented", False)
        end

    test_post_vps_insert_cd
            -- Insert CD in VPS
            --
            -- Mounts an ISO image in the VPS virtual CD drive from the given URL.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
            l_url: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.post_vps_insert_cd(l_id, l_url)
            assert ("not_implemented", False)
        end

    test_post_vps_reinstall_os
            -- Reinstall VPS OS
            --
            -- Reinstalls the operating system on the VPS. Warning - all data will be erased.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
            l_template: STRING_32
            l_local_password: STRING
            l_password: STRING
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_template
            -- l_local_password

            -- l_response := api.post_vps_reinstall_os(l_id, l_template, l_local_password, l_password)
            assert ("not_implemented", False)
        end

    test_post_vps_reset_password
            -- Reset VPS Password
            --
            -- Resets the root password on the VPS to a new randomly generated password.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.post_vps_reset_password(l_id)
            assert ("not_implemented", False)
        end

    test_post_vps_restore
            -- Restore VPS from Backup
            --
            -- Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
            l_restore_request: RESTORE_REQUEST
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_restore_request

            -- l_response := api.post_vps_restore(l_id, l_restore_request)
            assert ("not_implemented", False)
        end

    test_post_vps_reverse_dns
            -- Update Reverse DNS
            --
            -- Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
        local
            l_response: TEXT_RESPONSE
            l_id: INTEGER_32
            l_reverse_dns_entries: REVERSE_DNS_ENTRIES
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_reverse_dns_entries

            -- l_response := api.post_vps_reverse_dns(l_id, l_reverse_dns_entries)
            assert ("not_implemented", False)
        end

    test_post_vps_setup_vnc
            -- Setup VNC
            --
            -- Sets up or refreshes the VNC console connection for the VPS.
        local
            l_response: QUEUE_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.post_vps_setup_vnc(l_id)
            assert ("not_implemented", False)
        end

    test_post_vps_slices
            -- Purchase Slice Upgrade
            --
            -- Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.post_vps_slices(l_id)
            assert ("not_implemented", False)
        end

    test_post_vps_view_desktop
            -- Update View Desktop
            --
            -- Updates or refreshes the remote desktop session for the VPS.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.post_vps_view_desktop(l_id)
            assert ("not_implemented", False)
        end

    test_put_vps
            -- Validate VPS Order
            --
            -- Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
        local
            l_response: VPS_ORDER_PUT_RESPONSE
            l_vps_order_put_request: VPS_ORDER_PUT_REQUEST
        do
            -- TODO: Initialize required params.

            -- l_response := api.put_vps(l_vps_order_put_request)
            assert ("not_implemented", False)
        end

    test_update_vps_info
            -- Update VPS Order
            --
            -- Updates settings on a VPS order.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.update_vps_info(l_id)
            assert ("not_implemented", False)
        end

    test_v_ps_cancel
            -- Cancel VPS Service
            --
            -- Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
        local
            l_response: VPS_CANCEL_200_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.v_ps_cancel(l_id)
            assert ("not_implemented", False)
        end

    test_vps_backups
            -- Get VPS Backups List
            --
            -- Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /vps/{id}/backups&#x60; to download or &#x60;DELETE /vps/{id}/backups&#x60; to remove a backup. Use &#x60;POST /vps/{id}/restore&#x60; to restore from a backup.
        local
            l_response: VPS_BACKUP_ROWS
            l_id: INTEGER_32
            l_var_all: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.vps_backups(l_id, l_var_all)
            assert ("not_implemented", False)
        end

    test_vps_buy_hd_space
            -- HD Space Addon Info
            --
            -- Returns available hard drive space addon options and pricing for the VPS.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.vps_buy_hd_space(l_id)
            assert ("not_implemented", False)
        end

    test_vps_buy_ip
            -- Additional IP Addon Info
            --
            -- Returns available additional IP address options and pricing for the VPS.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.vps_buy_ip(l_id)
            assert ("not_implemented", False)
        end

    test_vps_change_timezone
            -- Get Timezone Info
            --
            -- Returns the list of available timezones that can be set on the VPS.
        local
            l_response: LIST [STRING_32]
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.vps_change_timezone(l_id)
            assert ("not_implemented", False)
        end

    test_vps_info
            -- Get VPS Order
            --
            -- Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
        local
            l_response: VPS
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.vps_info(l_id)
            assert ("not_implemented", False)
        end

    test_vps_invoices
            -- Get VPS Invoices
            --
            -- Returns the billing invoices associated with this VPS.
        local
            l_response: CHARGE_INVOICE_ROWS
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.vps_invoices(l_id)
            assert ("not_implemented", False)
        end

    test_vps_list
            -- List VPS Orders
            --
            -- Returns all VPS services on the account with their current status and configuration.
        local
            l_response: LIST [VPS_ROW]
        do
            -- TODO: Initialize required params.

            -- l_response := api.vps_list
            assert ("not_implemented", False)
        end

    test_vps_reinstall_os
            -- VPS Reinstall OS Options
            --
            -- Returns the list of available OS templates for reinstalling the VPS.
        local
            l_response: VPS_TEMPLATES_LIST
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.vps_reinstall_os(l_id)
            assert ("not_implemented", False)
        end

    test_vps_reverse_dns
            -- Reverse DNS Info
            --
            -- Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
        local
            l_response: REVERSE_DNS_ENTRIES
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.vps_reverse_dns(l_id)
            assert ("not_implemented", False)
        end

    test_vps_setup_vnc
            -- VNC Setup Info
            --
            -- Returns the current VNC connection information for the VPS.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.vps_setup_vnc(l_id)
            assert ("not_implemented", False)
        end

    test_vps_slices
            -- Slice Upgrade Info
            --
            -- Returns available slice upgrade options and pricing for the VPS.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.vps_slices(l_id)
            assert ("not_implemented", False)
        end

    test_vps_traffic_usage
            -- Get Traffic Usage
            --
            -- Returns bandwidth traffic usage data for the VPS.
        local
            l_response: VPS_TRAFFIC_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.vps_traffic_usage(l_id)
            assert ("not_implemented", False)
        end

    test_vps_view_desktop
            -- Get View Desktop Info
            --
            -- Returns remote desktop connection information for the VPS.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.vps_view_desktop(l_id)
            assert ("not_implemented", False)
        end

    test_vps_welcome_email
            -- Resend VPS Welcome Email
            --
            -- Resends the welcome email containing connection details and credentials for the VPS order.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.vps_welcome_email(l_id)
            assert ("not_implemented", False)
        end

feature {NONE} -- Implementation

    api: VPS_API
            -- Create an object instance of `VPS_API'.
        once
            create { VPS_API } Result
        end

end
