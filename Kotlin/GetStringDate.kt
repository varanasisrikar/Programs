import java.time.LocalDate
import java.time.format.DateTimeFormatter

fun main(args: Array<String>)
{
    // Format y-M-d or yyyy-MM-d
    val string = "2019-08-29"
    val date = LocalDate.parse(string, DateTimeFormatter.ISO_DATE)

    println(date)
}
