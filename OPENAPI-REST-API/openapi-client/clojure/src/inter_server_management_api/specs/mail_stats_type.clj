(ns inter-server-management-api.specs.mail-stats-type
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.mail-stats-type-volume :refer :all]
            )
  (:import (java.io File)))


(def mail-stats-type-data
  {
   (ds/opt :time) string?
   (ds/opt :usage) int?
   (ds/opt :currency) string?
   (ds/opt :currencySymbol) string?
   (ds/opt :cost) float?
   (ds/opt :received) int?
   (ds/opt :sent) int?
   (ds/opt :volume) mail-stats-type-volume-spec
   })

(def mail-stats-type-spec
  (ds/spec
    {:name ::mail-stats-type
     :spec mail-stats-type-data}))
