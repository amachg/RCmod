# Ανακατασκευή τηλεκατευθυνόμενου αυτοκινήτου με Arduino - RCmod - 7ο Γυμνάσιο Χαϊδαρίου

Η Ομάδα
Η ομάδα ρομποτικής @robot7gymchai του σχολείου μας, αποτελείται από τους μαθητές Μουτζουρίδη Βασίλη, Μπατσινίλα Ζωή και Αναστασιάδη Αντώνη και τον καθηγητή Kο Μαχαιρίδη.

Το Πρόβλημα και η υπάρχουσα κατάσταση
Ένα είδος αντικειμένου που συνηθίζεται να πετιέται, αφού χαλάσει μετά από σκληρή χρήση, είναι τα παιδικά ηλεκτρικά παιχνίδια.
Δυστυχώς η τρέχουσα πρακτική της απόρριψης στα οικιακά σκουπίδια εκατομμυρίων παρόμοιων αντικείμενων μολύνει το περιβάλλον με τα πλαστικά τους μέρη και τον υδροφόρο ορίζοντα με τα βαρέα μέταλλα που περιέχονται στα ηλεκτρονικά τους εξαρτήματα και τις μπαταρίες.
Ο πλανήτης υποφέρει από τα υπερβολικά σκουπίδια κάθε είδους και τα κράτη προσπαθούν να ενθαρρύνουν την ανακύκλωση των υλικών. Δυστυχώς οι τρέχουσες πρακτικές ανακύκλωσης δεν περιλαμβάνουν πάντα τις ηλεκτρικές και ηλεκτρονικές συσκευές. Ο καλύτερος τρόπος αντιμετώπισης του προβλήματος είναι η επισκευή για την επαναχρησιμοποίησή τους. Όμως, δεν είναι πάντα οικονομικά πρακτική και συμφέρουσα, ιδιαίτερα σε ευρεία εμπορική κλίμακα.

Η πρότασή μας - Στόχος & Κόστος
Η πρότασή μας είναι η επισκευή σε τοπικό και ατομικό επίπεδο που είναι οικονομικά συμφέρουσα, με φθηνά υλικά του ανοιχτού οικοσυστήματος Arduino και κόστος πολύ χαμηλότερο από το κόστος αγοράς καινούργιου παιχνιδιού.
Συγκεκριμένα, στόχος της ομάδας μας είναι η επανάχρηση ενός τηλεκατευθυνόμενου αυτοκινήτου-παιχνιδιού, που έχει χαλάσει στο ηλεκτρονικό του μέρος, στα πλαίσια της κυκλικής οικονομίας και ιδιαίτερα του κύκλου «αγοράζω-χρησιμοποιώ-επισκευάζω-ξαναχρησιμοποιώ». Το έργο συνδυάζει γνώσεις και δεξιότητες από τους τομείς της μηχανικής, της πληροφορικής, της ρομποτικής και των ηλεκτρονικών και έχει ιδιαίτερη εκπαιδευτική αξία.
 
Πρωτοτυπία λύσης
Από μια πρόχειρη αναζήτηση στο διαδίκτυο δεν εντοπίσαμε κάποιο ίδιο έργο. Υπάρχουν όμως αρκετά παρόμοια.

Λίστα υλικών και προτεινόμενου εξοπλισμού:
Η κατασκευή χρησιμοποιεί τα υλικά:
Χαλασμένο τηλεκατευθυνόμενο μοντέλο αυτοκινήτου «Rock Crawler jr» της εταιρίας Maisto (0€)
Μικροελεγκτή Arduino Uno κλώνο (8€)
Πλακέτες οδήγησης κινητήρων DC, με τσιπάκι DRV887 (2x5=10€)
Πλακέτα Bluetooth 4.0 (BLE) με τσιπάκι HM-10 (10€)
Κινητό τηλέφωνο Android για εκτέλεση της εφαρμογή από το “MIT App Inventor” (0€)
Τρεις επαναφορτιζόμενες μπαταρίες λιθίου, από χαλασμένο λάπτοπ (0€)
Τριπλή μπαταριοθήκη 18650 (2€)
Καλώδια, πλακέτα δοκιμών (breadboard) (3€)

και τα εργαλεία:
ηλεκτρικό κολλητήρι και κόλληση, ψαλίδι, κοπίδι, πιστόλι θερμόκολλας και κόλλα σιλικόνης, μυτοτσίμπιδο, κατσαβίδια, αμπερόμετρο με τσιμπίδα, χάρακα, θερμοσυστελλόμενα
 
Σχέδια
 
Υλοποίηση
Σε πρώτη φάση, αποσυναρμολογήσαμε αυτοκινητάκι ξεβιδώνοντας το αμάξωμα και εμφανίστηκε η η χαλασμένη ηλεκτρονική πλακέτα του. Προχωρήσαμε σε αντικατάσταση της χαλασμένης πλακέτας με μικροελεγκτή Arduino Uno.
Επειδή η πλακέτα ήταν κολλημένη στους μεταλλικούς πόλους της μπαταριοθήκης, χρειάστηκε να ξεκολληθεί με τη βοήθεια ηλεκτρικού κολλητηριού και λίγης κόλλησης.

Το αυτοκινητάκι έχει τέσσερις κινητήρες τύπου brushed-DC που δουλεύουν στα 9v. Τους ελέγξαμε και λειτουργούν κανονικά άρα θα τους κρατήσουμε στο επισκευασμένο μοντέλο.
Μετά την αφαίρεση της πλακέτας, ξεκολλήσαμε και τα καλώδια των τριών κινητήρων, από τις επαφές πάνω στην πλακέτα. Κατευθήναμε τα έξι αυτά καλώδια, ώστε να εμφανιστούν πάνω από το σασί και ξαναβιδώσαμε το αμάξωμα στο σασί με τις παλιές βίδες του.

Πάνω στο αμάξωμα, κολλήσαμε τον ελεγκτή Uno και ένα μικρό breadboard, με θερμοκόλλα.
Στο πίσω μέρος του αυτοκινήτου, ζεστάναμε με φλόγα αναπτήρα έναν πλάγιο πλαστικό προφυλακτήρα και τον λυγίσαμε, ώστε να γίνει οριζόντιος, σαν βάση. Πάνω του, κολλήσαμε την μπαταριοθήκη, που μαζί με τις μπαταρίες, είναι το πιο βαρύ μέρος του αυτοκινήτου.
Στην τροφοδοσία ισχύος, αντικαταστήσαμε τις έξι αλκαλικές μπαταρίες, με τρεις επαναφορτιζόμενες μπαταρίες 18650 Ιόντων-Λιθίου (Li-Ion) στα 12,6v (3x4,2v) με χωρητικότητα 2400 mAh, για μεγαλύτερη δύναμη και ταχύτητα στο αυτοκινητάκι.

Τα τέσσερα καλώδια των δύο κινητήρων DC που περιστρέφουν τους τέσσερις τροχούς, συνδέθηκαν (κατα ζεύγη) στην έξοδο της μιας πλακέτας (module) οδήγησης. Τα άλλα δύο καλώδια του κινητήρα στροφής του τιμονιού, συνδέθηκαν στην άλλη πλακέτα οδήγησης. Και οι δύο πλακέτες θηλύκωσαν με τα πινάκια τους πάνω στο breadboard.
Το ίδιο έγινε και με την πλακέτα του BlueTooth, που σκοπό έχει να αντικαταστήσει την λειτουργία του χαλασμένου ασύρματου τηλεχειριστηρίου. Αυτή λαμβάνει ασύρματα τις εντολές που εκπέμπονται από κινητό τηλέφωνο και τις μεταφέρει στον ελεγκτή μέσω μιας σειριακής θύρας λογισμικού. Οι εντολές αυτές είναι οι: “κινήσου εμπρός”, “κινήσου πίσω”, “στρίψε αριστερά”, “στρίψε δεξιά”.

Πάνω στο breadboard έγιναν οι κατάλληλες συνδέσεις με καλώδια συνδετήρες. Η διασύνδεση μεταξύ ελεγκτή και breadboard έγινε με καλωδιοταινία εννιά αγωγών. Τέσσερις από αυτούς μεταφέρουν σήματα παλμοδιαμορφωμένα σήματα (PWM) προς τους οδηγούς των κινητήρων, ένα την τροφοδοσία τους με 11v, δύο συνδέουν την σειριακή θύρα του ασύρματου, ένα την τροφοδοσία του με 5v και το τελευταίο μεταφέρει την κοινή γη (GND). Τα 11v παρέχονται από την υποδοχή Vin του ελεγκτή, που δρα σαν έξοδος του ρεύματος της μπαταριοθήκης των 12v, μετά από μια πτώση τάσης γυρω στο 1v. μπαταριοθήκη συνδέεται στην κυλινδρική υποδοχή του ελεγκτή.
 
Προγραμματισμός - Βασικός αλγόριθμος
Η ανάπτυξη του προγράμματος του ελεγκτή έγινε στο περιβάλλον Arduino Web Editor, στον επίσημο ιστότοπο της εταιρείας Arduino. Μέσα από τον περιηγητή, αφού συνδεθούμε με τον λογαριασμό μας, πληκτρολογούμε τον πηγαίο κώδικα, τον μεταφράζουμε και ανεβάζουμε το εκτελέσιμο αρχείο στον ελεγκτή, μέσω της υλικής σειριακής του θύρας και της USB του υπολογιστή. Η γλώσσα προγραμματισμού είναι η C/C++.

Στον κεντρικό βρόχο του προγράμματος, επαναλαμβάνονται τα παρακάτω:
Διάβασε τη σειριακή θύρα που αντιστοιχεί στην ασύρματη σύνδεσης με το κινητό
Αν υπάρχουν εισερχόμενες εντολές, τότε διάβασε τον κωδικό και αποφάσισε αν αφορούν στροφή του τιμονιού ή περιστροφή των τροχών. Στην πρώτη περίπτωση ο δεύτερος κωδικός μας λέει προς τα που πρέπει να στρίψουν οι ρόδες, ενώ στην δεύτερη, αν η περιστροφή των τροχών είναι εμπροσθεν ή όπισθεν.
Ανάλογα με την περίπτωση, εκτέλεσε την κατάλληλη μέθοδο των κινητήρων, δίνοντας σήμα στις εισόδους IN1 και IN2 του ανάλογου οδηγού. Οι μέθοδοι είναι:
Στρίψε Αριστερά
Στρίψε Δεξιά
Ίσιωσε τις ρόδες
Κινήσου Εμπρός
Κινήσου Πίσω
Τσούλησε ελεύθερα μέχρι να σταματήσεις
Μέτρα την τάση της μπαταρίας, μέσω της αναλογικής θύρας, κάθε λεπτό και στείλε το αποτέλεσμα, για εμφάνιση στην εφαρμογή του κινητού τηλεφώνου

Δοκιμές – Αποτελεσματικότητα 

 
Εκπαιδευτικό υλικό/περιεχόμενο/παρουσίαση

Επέκταση
Μια καλή επέκταση του έργου, είναι η ανίχνευση εμποδίων, εμπρος και πίσω από το αυτοκινητάκι, χρησιμοποιώντας την αντανακλώμενη ηχώ αισθητήρων απόστασης, υπερήχων (π.χ. HC-SR04). 
Ο σκοπός είναι να αποφεύγονται τρακαρίσματα με εμπόδια, ακόμα και αν έχει πάρει τέτοια εντολή. Ξεκινήσαμε να εφαρμόζουμε την επέκταση αυτή, αλλά δυστυχώς δεν προλάβαμε να την ολοκληρώσουμε.

 
Άδεια χρήσης
Παρακαλώ δείτε το αρχείο LICENSE
 
Επαφή
Instagram: @robot7gymchai
email: amach@sch.gr
Ιστοχώρος 7ου Γυμνάσιο Χαϊδαρίου: http://7gym-chaid.att.sch.gr
