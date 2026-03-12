(ns inter-server-management-api.specs.server-ipmi-live-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def server-ipmi-live-info-data
  {
   (ds/opt :text) string?
   (ds/opt :public_ip) string?
   (ds/opt :allowed_ip) string?
   (ds/opt :client_username) string?
   (ds/opt :client_password) string?
   })

(def server-ipmi-live-info-spec
  (ds/spec
    {:name ::server-ipmi-live-info
     :spec server-ipmi-live-info-data}))
