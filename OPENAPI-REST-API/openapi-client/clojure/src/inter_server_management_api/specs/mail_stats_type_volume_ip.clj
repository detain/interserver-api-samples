(ns inter-server-management-api.specs.mail-stats-type-volume-ip
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def mail-stats-type-volume-ip-data
  {
   (ds/opt :1111) int?
   (ds/opt :2222) int?
   (ds/opt :3333) int?
   (ds/opt :4444) int?
   })

(def mail-stats-type-volume-ip-spec
  (ds/spec
    {:name ::mail-stats-type-volume-ip
     :spec mail-stats-type-volume-ip-data}))
