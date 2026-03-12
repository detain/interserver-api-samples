(ns inter-server-management-api.specs.update-ticket
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def update-ticket-data
  {
   (ds/opt :ip) string?
   (ds/opt :ip_address) string?
   (ds/opt :customer_server_access) string?
   (ds/opt :root_password) string?
   (ds/opt :sudo_username) string?
   (ds/opt :sudo_password) string?
   (ds/opt :port) int?
   })

(def update-ticket-spec
  (ds/spec
    {:name ::update-ticket
     :spec update-ticket-data}))
