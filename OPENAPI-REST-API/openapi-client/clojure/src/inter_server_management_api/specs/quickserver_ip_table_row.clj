(ns inter-server-management-api.specs.quickserver-ip-table-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def quickserver-ip-table-row-data
  {
   (ds/opt :desc) string?
   (ds/opt :value) string?
   })

(def quickserver-ip-table-row-spec
  (ds/spec
    {:name ::quickserver-ip-table-row
     :spec quickserver-ip-table-row-data}))
