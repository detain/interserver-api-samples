(ns inter-server-management-api.specs.server-ipmi-power-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def server-ipmi-power-request-data
  {
   (ds/req :action) string?
   (ds/opt :asset) int?
   })

(def server-ipmi-power-request-spec
  (ds/spec
    {:name ::server-ipmi-power-request
     :spec server-ipmi-power-request-data}))
