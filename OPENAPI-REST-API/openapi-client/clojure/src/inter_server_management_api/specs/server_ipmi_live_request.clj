(ns inter-server-management-api.specs.server-ipmi-live-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def server-ipmi-live-request-data
  {
   (ds/req :ip) string?
   (ds/opt :asset) int?
   })

(def server-ipmi-live-request-spec
  (ds/spec
    {:name ::server-ipmi-live-request
     :spec server-ipmi-live-request-data}))
